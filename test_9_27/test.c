#include<stdio.h>
/* int main()
{
   int a = 13;
   //把a的二进制中的第5位设置为1
   a = a | (1 << 4);
   printf("a = %d\n", a);
   //把a的二进制中的第5位设置为0
   a = a & ~(1 << 4);
   //00000000000000000000000000001101
   //00000000000000000000000000010000
   //00000000000000000000000000011101
   return 0;
} */

//赋值操作符 = += -= *= /= %= &= |= ^= <<= >>=
/* int main()
{
    int a = 10;
    a = 100;
    a = a + 100;//1
    a += 100;   //2
    a = a >> 3;
    a >>= 3;
    return 0;
} */
//=赋值 ==判断相等

//单目操作符 ！ ~ & * + - ++ -- sizeof
/* int main()
{
    int flag = 5;
    printf("%d\n",!flag);
    //flag为真，打印hehe
    //if (flag )
    //{
    //    printf("hehe\n");
    //}
    //flag为假，打印haha
    //if (!flag)
    //{
    //    printf("haha\n");
    //}
    return 0;
} */
//单目操作符只有一个操作数
/* int main()
{
    int arr[10] = {0};
    short s = 5;
    int a = 10;
    printf("%d\n",sizeof(s = a + 2));//括号中的表达式不会参与运算
    printf("%d\n",s);
    printf("%d\n",sizeof(a));
    printf("%d\n",sizeof a);
    printf("%d\n",sizeof int );//sizeof int 为错误写法
    //sizeof是一个操作符
    printf("%d\n",sizeof(int [10]));//40 - int [10]数组类型
    return 0;
} */
/* int main()
{
    int a = -1;
    //10000000000000000000000000000001 - 原码
    //11111111111111111111111111111110 - 反码
    //11111111111111111111111111111111 - 补码
    //~按位取反
    //11111111111111111111111111111111 
    //00000000000000000000000000000000
    int b = ~a;
    return 0;
} */
/* int main()
{
    int a = 10;
    int b = a++;//后置++，先使用，再++
    int b = ++a;//前置++，先++，再使用
    printf("%d\n", a);
    printf("%d\n", b);
    return 0;
} */
//(类型)强制类型转换
/* int main()
{
    int a = (int)3.14;//int a = int(3.14);//err

    return 0;
} */
/* int main()
{
    int a = 10;
    int* p = &a;//取地址操作符
    *p = 20;//解引用操作符
    return 0;
} */

