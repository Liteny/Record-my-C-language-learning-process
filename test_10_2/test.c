#include <stdio.h>
/* int main()
{
    int a = 10;
    int* p = &a;//指针变量
    return 0;
} */

//int main()
//{
    //printf("&d\n", sizeof(int*));//4
    //printf("&d\n", sizeof(char*));//4
    //printf("&d\n", sizeof(double*));//4

    //int a = 0x11223344;
    //int* pa = &a;
    //*pa = 0;
    //char* pc = &a;
    //*pc = 0;
    //printf("&p\n", pa);
    //printf("&p\n", pc);

    //return 0;
//}
//指针类型决定了指针进行解引用操作的时候，能够访问空间的大小

/* int main()
{
    int a = 0x11223344;
    int* pa = &a;
    char* pc = &a;
    
    printf("&p\n", pa);
    printf("&p\n", pa+1);//pa+1指向的是a的下一个int类型的空间
    
    printf("&p\n", pc);
    printf("&p\n", pc+1);//pc+1指向的是a的下一个char类型的空间
    return 0;
} */
//指针类型决定了指针进行加减整数的时候，走的步长

//指针类型决定了指针的解引用操作能够访问空间的大小
/* int main()
{
    int arr[10] = {0};
    //int* p = arr;//数组名，数组的首元素的地址
    char* p = arr;
    int i = 0;
    for(i = 0; i < 10; i++)
    {
        *(p+i) = 1;
    }
    return 0;
} */

//野指针:指针变量指向非法的空间
/* int main()
{
    int a;//局部变量，没有初始化，随机值
    int* p;//局部的指针变量，没有初始化，随机值
    *p = 20;
    return 0;
}
//野指针：指针越界访问
int main()
{
    int arr[10] = {0};
    int* p = arr;
    int i = 0;
    for (i = 0; i < 12; i++)
    {
       *(p++);
    }
    return 0;
}
//野指针：指针变量指向非法的空间
int* test()
{
    int a = 10;
    return &a;
}
int main()
{
    int* p = test();
    *p = 20;
    return 0;
} */