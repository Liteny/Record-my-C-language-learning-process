#include<stdio.h>
#include<string.h>
/* int Add(int x, int y)
{
    int z = 0;
    z = x + y;
    return z;
}
int main()
{
    int a = 10;
    int b = 20;
    int sum = Add(a.b);
    printf("%d\n", sum);
    return 0;
} */

/* int main()
{
    char arr1[] = "abc";
    char arr2[20] = "####";
    strcpy(arr2, arr1);//将arr1中的内容拷贝到arr2中,\0结束标志
    printf("%s\n", arr2);
    return 0;
} */

/* int main()
{
    char arr[] = "hello world";
    memset(arr, '*', 5);//将arr中的前5个字符替换为*
    printf("%s\n", arr);
    return 0;
} */

//取两个数中的最大值
/* int get_max(int x, int y)
{
    if(x > y)
        return x;
    else
        return y;
}
int main()
{
    int a = 10;
    int b = 20;
    int max = get_max(a, b);
    printf("max=%d\n", max);
    return 0;
} */

/* void swap1(int x, int y)//当实参传给形参时，形参其实是实参的拷贝，对形参的修改不会影响实参
{
    int tmp = 0;
    tmp = x;
    x = y;
    y = tmp;
}
void swap2(int* pa, int* pb)//此函数可以实现交换，因为交换的是实参的值
{
    int tmp = 0;
    tmp = *pa;
    *pa = *pb;
    *pb = tmp;
}
int main()
{
    int a = 10;
    int b = 20;
    printf("a=%d b=%d\n", a,b);
    //swap1(a,b);//传值调用
    swap2(&a, &b);//传址调用
    printf("a=%d b=%d\n", a,b);
    return 0;
}
 */

/* int main()
{
   int a = 10;
   int* pa = &a;//pa是一个指针变量，指向a的地址
   *pa = 20;//解引用操作
   printf("%d\n", a);
   return 0;
} */

//链式访问
/* int main()
{
    printf("%d", printf("%d", printf("%d",43)));//printf函数的返回值是打印字符的个数
    return 0;
} */

/* //函数声明
int Add(int x, int y);
int main()
{
    int a = 10; 
    int b = 20;
    int sum = 0;
    //函数调用
    sum = Add(a, b);
    return 0;
}

// 函数的定义
int Add(int x, int y)
{
    int z = 0;
    z = x + y;
    return z;
} */