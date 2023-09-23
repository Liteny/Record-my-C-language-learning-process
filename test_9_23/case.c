#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
/* int main()
{   
    int ch = 0;
    int ret = 0;
    char password[20] = {0};
    printf("please enter a password:>");
    scanf("%s",password);//输入密码，并存放在password数组中
    //此处加入getchar()函数，用于读取缓冲区的回车键，否则会走else分支
    while((ch=getchar()) != '\n')//写一个while循环，用于读取缓冲区的回车键
    {
        ;
    }
    printf("please confirm your password with (y/n):>");
    ret = getchar();
    if(ret == 'y')
    {
        printf("confirm success\n");
    }
    else
    {
        printf("confirm failed\n");
    }
return 0;         */
//} 
//scanf与getchar是输入函数，scanf输入后，会在缓冲区留下一个回车键，getchar会读取缓冲区的回车键，所以程序会走else分支
//此代码走不通的原因是：在输入密码后，按下回车键，回车键的ASCII码是10，而不是y的ASCII码121，所以程序会走else分支

/* int main()
{
    int ch = 0;
    while((ch = getchar()) != EOF)
    {
        if (ch<'0' || ch>'9')
           continue;
        putchar(ch);   
    }
return 0;    
} */

/* int main()
{
    int i = 0;
    int arr[10] = {0};
    for(i=0;i<10;i++)
    {
        arr[i] = i;
    }
    for(i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
} */

/* int main()
{
    int i = 0;
    int k = 0;
    for(i=0,k=0;k=0; i++,k++)//此处k=0是赋值语句，不是判断语句，所以循环条件永远为真，代码循环0次
       k++;
    return 0;   
} */

/* int main()
{
    int i = 1;
    do 
    {
        printf("%d ", i);
        i++;
    }
    while(i<=10);
    return 0;
} */

/* int main()
{
    int i = 0;
    int n = 0;
    int ret = 1;
    int sum = 0;
    for(n=1;n<=10;n++)
    {
        ret = 1;
        for(i=1;i<=n;i++) 
        {
            ret = ret*i;//问题在于ret没有清零，所以每次循环都会累乘
        } 
        
        sum = sum + ret;
    }
    printf("sum = %d\n",sum);
    return 0;
} */

/* int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int k = 7;
    int i = 0;//写一个代码，在arr数组中找到7，并打印其下标
    int sz = sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<sz;i++)
    {
        if(arr[i] == k)
        {
            printf("find it , the number is:%d\n",i);
            break;
        }
    }
    if(i == sz)
    {
        printf("can not find it\n");
    }
    return 0;
} */
//二分查找
/* int main()
{
    
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int k = 7;
    int sz = sizeof(arr)/sizeof(arr[0]);//计算数组元素个数
    int left = 0;//左下标
    int right = sz-1;//右下标
    while(left <= right)
    {
        int mid = (left+right)/2;//中间下标
        if(arr[mid] > k)
        {
            right = mid-1;
        }
        else if(arr[mid] < k)
        {
            left = mid+1;
        }
        else
        {
            printf("find it , the number is:%d\n",mid);
            break;
        }
    }
    if (left >right)
    {
    printf("can not find it\n");
    }
    return 0; 
} */

/* int main()
{
    char arr1[] ="band g dream it is mygo!!!!!";
    char arr2[] ="############################";
    int left = 0;
    //int right = sizeof(arr1)/sizeof(arr1[0])-2;问题在于字符串后面的/0也会被计算在内，所以要减2
    int right = strlen(arr1)-1;
    while(left <= right)
    {
        arr2[left] = arr1[left];
        arr2[right] = arr1[right];
        printf("%s\n",arr2);
        Sleep(1000);//休眠1000毫秒
        system("cls");//清屏
        left++;
        right--;
    }
    return 0;
} */

/* int main()
{
    int i = 0;
    char password[20] = {0};
    for(i=0;i<3;i++)
    {
        printf("enter your PIN:>");
        scanf("%s",password);
        if(strcmp(password,"123546") == 0)//==不能用来比较两个字符串是否相等，应该使用一个库函数-strcmp
        {
            printf("land successfully\n");
            break;
        }
        else
        {
            printf("PIN is wrong!\n");
        }
    }
        if(i == 3)
        printf("PIN is wrong!,exit the program\n");
    return 0;
} */
