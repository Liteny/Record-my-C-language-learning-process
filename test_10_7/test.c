//浮点数在内存中的存储
#include <stdio.h>
/* int main()
{
    double d = 1E10;
    printf("%lf\n", d);
    return 0;
} */

//9.0
//1001.0
//(-1)^0 * 1.001 * 2^3
//(-1)^s * 1.M * 2^E
/* int main()
{
    int n = 9;
    //00000000 00000000 00000000 00001001
    
    float *pFloat = (float *)&n;
    printf("n的值为:%d\n", n);
    printf("*pFloat的值为:%f\n", *pFloat);//0.000000
    //0 00000000 00000000000000000001001
    //（-1）^0 * 0.00000000000000000001001 * 2^-126

    *pFloat = 9.0;
    //1001.0
    //(-1)^0 * 1.001 * 2^3
    //0 10000010 00100000000000000000000

    printf("num的值为:%d\n", n);//1091567616
    printf("*pFloat的值为:%f\n", *pFloat);//9.000000
    return 0;
} */

/* int main()
{
    float f = 5.5;
    //5.5
    //101.1
    //(-1)^0 * 1.011 * 2^2
    //S = 0 E = 2 M = 1.011//E = e + 127
    //0 10000001 01100000000000000000000
    //0100 0000 1011 0000 0000 0000 0000 0000
    //0x40b00000

    //0 00000000 01100000000000000000000
    // +/- 0.1011 * 2^(-126)

    //0 11111111 00000000000000000000000
    // +/- 无穷大
    return 0;
} */




/* void test(int arr[])
{
    int sz = sizeof(arr) / sizeof(arr[0]);
    printf("sz = %d\n", sz);
}
int main()
{
    int arr[10] = {0};  
    test(arr);
    return 0;
}
//字符指针
int main()
{
    char ch = 'w';
    char *pc = &ch;

    return 0;
} */

/* int main()
{
    char arr[] = "abcdef";
    char *pc = arr;
    printf("%s\n", arr);
    printf("%s\n", pc);
    return 0;
}  */

/* int main()
{
    const char *p = "abcdef";//常量字符串
    //*p = 'w';常量不可修改
    //printf("%s\n", p);
    //printf("%c\n", *p);
    //printf("%s\n", p);
    return 0;
}
 */

int main()
{
    char arr1[] = "abcdef";
    char arr2[] = "abcdef";
    const char *p1 = "abcdef";
    const char *p2 = "abcdef";
    /* if (arr1 == arr2)
    {
        printf("hehe\n");
    }
    else
    {
        printf("haha\n");
    } */
    if (p1 == p2)
    {
        printf("hehe\n");
    }
    else
    {
        printf("haha\n");
    }
    return 0;
}

//指针数组
/* int main()
{
    int* parr[4];//存放整形指针的数组
    return 0;
} */

int main()
{
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {2, 3, 4, 5};
    int arr3[] = {3, 4, 5, 6};
    int *parr[] = {arr1, arr2, arr3};
    int i = 0;
    for (i = 0; i < 3; i++)
    {
        int j = 0;
        for (j = 0; j < 4; j++)
        {
            printf("%d ", *(parr[i] + j));
        }
        printf("\n");
    }
    return 0;
}