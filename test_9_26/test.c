#include<stdio.h>
//二维数组
//int main()
//{
    //int arr[3][4] = {{1,2,3},{4,5}};
    //char ch[5][6];//5行6列
    //int arr[3][] = {{1,2,3,4},{5,6,7,8}};//列数不能省略
    //int arr[][4] = {{1,2,3,4},{5,6,7,8}};//行数可以省略
    //return 0;
//}

/* int main()
{
    int arr[3][4] = {{1,2,3},{4,5}};
    int i = 0;
    for(i = 0; i < 3; i++)
    {
        int j = 0;
        for(j = 0; j < 4; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
} */

//二维数组的存储
/* int main()
{
    int arr[3][4] = {{1,2,3},{4,5}};
    int i = 0;
    for(i = 0; i < 3; i++)
    {
        int j = 0;
        for(j = 0; j < 4; j++)
        {
            printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
            //二维数组的存储是连续的
        }
    }
    return 0;
} */

//二维数组的使用
/* int main()
{
    int arr[][4] = {{1,2},{3,4},{4,5}};
    int i = 0;
    int j = 0;
    int* p = &arr[0][0];
    for (i=0;i<12;i++)
    {
        printf("%d ",*(p+i));
    }
    return 0;
} */

//冒泡排序的设计
/* void bubble_sort(int arr[],int sz)
{
    //确定冒泡排序的趟数
    int i = 0;
    for(i=0;i<sz-1;i++)
    {
        //一趟冒泡排序的过程
        int j = 0;
        for(j=0;j<sz-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                //交换
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]=tmp;
            }
        }
    }
}
int main()
{
    int arr[10] = {9,8,7,6,5,4,3,2,1,0};
    //排序为升序 - 冒泡排序
    //计算数组元素个数
    int sz = sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr,sz);//数组传参，实际上传递的是数组的首元素的地址
    for(int i=0;i<sz;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
} */

//数组名是什么
//数组名是首元素的地址
//但是有两个例外
//1.sizeof(数组名) - 数组名表示整个数组，sizeof(数组名)计算的是整个数组的大小单位是字节
//2.&数组名 - 数组名表示整个数组，&数组名表示整个数组的地址
/* int main()
{
    int arr[10] = {0};
   
    //printf("%p\n",&arr[0]);

    printf("%p\n",&arr);//&arr取出数组的地址
    printf("%p\n",&arr+1);
    printf("%p\n",arr);
    printf("%p\n",arr+1);
    //int sz = sizeof(arr);//数组名表示整个数组
    //printf("%d\n",sz);
    
    //printf("%p\n",&arr[0]);
    //printf("%p\n",arr);//数组名是首元素的地址
    
    return 0;
} */

//更有效率的冒泡排序
/* void bubble_sort(int arr[],int sz)
{
    int i = 0;
    for(i=0;i<sz-1;i++)
    {
        int flag = 1;//假设是有序的
        int j = 0;
        for(j=0;j<sz-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                //交换
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]=tmp;
                flag = 0;//发生了交换，说明无序，标记变为0
            }
        }
        if(flag == 1)
        {
            break;
        }
    }
}
int main()
{
    int arr[10] = {9,8,7,6,5,4,3,2,1,0};
    int sz = sizeof(arr)/sizeof(arr[0]); 
    bubble_sort(arr,sz);
    for(int i=0;i<sz;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
} */