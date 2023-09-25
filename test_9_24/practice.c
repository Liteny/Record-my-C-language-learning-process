#include<stdio.h>
#include<math.h>
//写一个函数可以判断一个数是否为素数
 /* int is_prime(int n)
{
    int j = 0;
    for(j=2;j<=sqrt(n);j++)
    {
        if(n%j == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int i = 0;
    for(i = 100; i <= 200; i++)
    {
        if(is_prime(i) == 1)//此处如果加入；则会出现错误
        printf("%d ", i);
    }
    return 0;
} */

//写一个函数可以判断一年是否为闰年
/* int is_leap_year(int y)
{
    if((y%4 == 0 && y%100 != 0) || (y%400 == 0))
        return 1;
    else
        return 0;
}
int main()
{
    int year = 0;
    for(year = 1000; year <= 2000; year++)
    {
        if(1 == is_leap_year(year))
        {
            printf("%d ", year);
        }
    }
    return 0;
} */

//写一个函数，实现一个整形有序数组的二分查找
/* int binary_search(int arr[], int k, int sz)
{
    //算法的实现
    //int sz = sizeof(arr)/sizeof(arr[0]);//本质上arr是一个指针
    int left = 0;
    int right = sz-1; 
    while (left<=right)//判断条件必须为<=
    {
        int mid = (left+right)/2;//必须在循环里
        if(arr[mid] < k)
        {
        left = mid+1;
        }
        else if (arr[mid] > k)
        {
        right = mid-1;
        }
        else
        {
        return mid;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1,2 ,3,4,5,6,7,8,9,10};
    int k = 7;
    int sz = sizeof(arr)/sizeof(arr[0]);
    int ret = binary_search(arr, k, sz);//此处传递过去的是数组arr首元素的地址
    if(ret == -1)
        printf("can not find\n");
    else
        printf("find it,subscript is: %d\n", ret);
    return 0;
} */

//写一个函数，每调用一次这个函数，就会将num的值加1
/* void Add(int* p)
{
    (*p)++;//应该给*p()
}
int main()
{
    int num = 0;
    Add(&num);
    printf("num = %d\n", num);
    return 0;
} */

//链式访问
int mian()
{ 
    int len = 0;
    //1
    len = strlen("abc");
    //2链式访问
    printf("%d\n", len);
    printf("%d\n",strlen("abc"));
    return 0;
}