#include <stdio.h>
/* int main()
{
    //int arr[8];
    //char ch[5];
    //int n = 8;
    //int arr[n];
    //变长数组--数组的大小是变量
    //int a = 10;//初始化
    //int arr[10] = {1,2,3,4,5,6,7,8,9,10};//完全初始化
    //int arr[10] = {1,2,3,4,5}; //不完全初始化，剩下的元素自动补0
    
    //int arr2[] = {1,2,3,4,5};//不写数组大小，自动推算数组大小
    //int arr2[5] = {1,2,3,4,5};
    
    //char ch1[5] = {'b','i','t'};
    //char ch2[] = {'b','i','t'};
    
    //char ch3[] = "bit";//4个元素，最后一个元素是\0
    //char ch4[5] = "bit";

    char ch5[] = "bit";//打印bit字符串
    char ch6[] = {'b','i','t'};//打印bit字符串，后面有乱码
    printf("%s\n",ch5);
    printf("%s\n",ch6);
    return 0;
} */

/* int main()
{
    int arr[10] = {0};
    arr[4] = 5;//[]下标引用操作符
    int i = 0;
    int sz = sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<sz;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
} */

/* int main()
{
    int arr[10] = {0};
    int i = 0;
    for(i=0;i<10;i++)
    {
        printf("&arr[%d] = %p\n",i,&arr[i]);
    }
    return 0;
} */
//一维数组在内存中是连续存放的
//随着数组下标的增长，地址是由低到高变化的

 /* int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};;
    int *p = arr;
    int i = 0;
    for(i=0;i<10;i++)
    {
        printf("%d ",*p);
        p++;
    }
    
    return 0;
}  */