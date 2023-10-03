#include<stdio.h>
/* int main()
{
    int a = 10;
    int* pa = &a;//初始化
    int* p = NULL;//初始化,给指针赋值NULL
    return 0;
} */

/* int main()
{
    int a = 10;
    int* pa = &a;
    *pa = 20;
    //
    pa = NULL;

    if(pa != NULL)
    {
        *pa = 20;
    }
    return 0;
} */

//指针的运算
//指针+-整数
/* int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int i = 0;  
    int sz = sizeof(arr)/sizeof(arr[0]);
    int* p = arr;
    for (i = 0; i < sz; i++)
    {
        printf("%d ", *p);
        p = p + 1;
    }
    return 0;
}

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int i = 0;
    int sz = sizeof(arr)/sizeof(arr[0]);
    int* p = arr[9];
    for (i = 0; i < sz; i++)
    {
        printf("%d ", *p);
        p = p - 1;
    }
    return 0;
}

#define N_VALUES 5
float values[N_VALUES];
float* vp;
//指针+-整数：指针的关系运算
for (vp = &values[0]; vp < &values[N_VALUES];)
{
    *vp++ = 0;
}*/

//指针-指针
/* int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    &arr[9] - &arr[0];
    //中间元素的个数
    printf("%d\n", &arr[9] - &arr[0]);
    return 0;
} */
/* int my_strlen(char* str)
{
    char* start = str;
    char* end = str;
    while (*end != '\0')
    {
        end++;
    }
    return end - start;
}
int main()
{
    char arr[] = "bit";
    int len = my_strlen(arr);
    printf("%d\n", len);
    return 0;
} */

//指针的关系运算
/* #define N_VALUES 5
float values[N_VALUES];
float *vp;
//最好用第一种写法
for(vp = &values[N_VALUES]; vp > &values[0];)
{
    *--vp = 0;
}
//标准规定允许指针与指向数组元素的下一个位置比较，但是不允许指向数组元素之前的位置比较
for(vp = &values[N_VALUES-1]; vp >= &values[0]; vp--)
{
    *vp = 0;
} */

//指针和数组
int main()
{
    int arr[10] = {0};
    printf("%p\n", arr);
    printf("%p\n", arr+1);
    printf("%p\n", &arr[0]);
    printf("%p\n", &arr[0]+1);
    printf("%p\n", &arr);
    printf("%p\n", &arr+1);//&arr+1表示跳过整个数组的大小
    //1. &arr - &数组名 - 数组名不是首元素的地址- 数组名表示整个数组 - &数组名取出的是整个数组的地址
    //2. sizeof(arr) - 数组名表示整个数组 - sizeof(arr)计算的是整个数组的大小
    return 0;
}
int main()
{
    int arr[10] = {0};
    int* p = arr;
    int i = 0;
    for (i = 0; i < 10; i++)
    {
        *(p + i) = i;
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

//二级指针
int main()
{
    int a = 10;
    int* pa = &a;
    int* * ppa = &pa;//ppa是二级指针
    int** * pppa = &ppa;//pppa是三级指针
    printf("%d\n", **pppa);
    return 0;
}

//指针数组 - 数组 - 存放指针的数组
//数组指针 - 指针
int main()
{
    int a = 10;
    int b = 20;
    int c = 30;
    int* arr[3] = {&a, &b, &c};
    int i = 0;
    for (i = 0; i < 3; i++)
    {
        printf("%d ", *(arr[i]));
    }
    return 0;
}