#include<stdio.h>
//算术操作符 + - * / %
/* int main() 
{
    //int a = 3 / 5;
    //float b = 3 / 5;
    float b = 3.0 / 5;
    printf("%f\n",b);
    return 0;
} */

/* int main()
{
    int a = 7 % 3;
    printf("%d\n",a);
    return 0;
} */

//移位操作符<< >>
/* int main()
{
    int a = 1;
    //把a的二进制位向左移动1位
    int b = a << 1;
    printf("%d\n",b);
    return 0;
} */
//右移操作符
//1.算术右移
//右边丢弃，左边补原有符号位
//2.逻辑右移
//右边丢弃，左边补0
/* int main()
{
    int a = -1;//存放二进制的补码
    int b = a >> 1;//当前的右移操作符采用的是算术右移
    printf("%d\n",b);
    return 0;
} */
//整数的二进制表示形式有三种
//原码：直接根据数值写出的二进制序列（负数）   //对于正整数来说，原码，补码，反码相同
//反码：原码的符号位不变，其余位取反
//补码：反码+1

//位操作符 & | ^ 
/* int main()
{ 
    int a = 3;
    int b = 5;
    //&按位与 - 按二进制位与   
    int c = a & b;
    printf("c = %d\n",c);
    //00000000000000000000000000000011
    //00000000000000000000000000000101
    //00000000000000000000000000000001
    return 0;
} */
/* int main()
{ 
    int a = 3;
    int b = 5;
    //|按位或 - 按二进制位或
    int c = a | b;
    //00000000000000000000000000000011
    //00000000000000000000000000000101
    //00000000000000000000000000000111
    printf("c = %d\n",c);
    return 0;
} */
/* int main()
{ 
    int a = 3;
    int b = 5;
    //^按位异或 - 按二进制位异或
    //对应的二进制位进行异或，相同为0，不同为1
    int c = a ^ b;
    //00000000000000000000000000000011
    //00000000000000000000000000000101
    //00000000000000000000000000000110
    printf("c = %d\n",c);
    return 0;
} */

//交换两个int变量的值，不能使用第三个变量，即a = 3,b = 5,交换后a = 5,b = 3
/* int main()
{
    int a = 3;
    int b = 5;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("a = %d b = %d\n",a,b);
    return 0;
} */
//a^a = 0
//0^a = a

//求一个整数存储在内存中的二进制中1的个数
int main()
{
    int a = 13;
    int count = 0;
    while(a)
    {
        if(a % 2 == 1)
        {
            count++;
        }
        a = a / 2;
    }
    printf("count = %d\n",count);
    //00000000000000000000000000001101
    //00000000000000000000000000000001
    //00000000000000000000000000000001
    return 0;
}
//通过按位与&来判断一个整数的二进制中1的个数
int main()
{
    int a = 13;
    int count = 0;
    while(a)
    {
        if(a & 1 == 1)
        {
            count++;
        }
        a = a >> 1;
    }
    printf("count = %d\n",count);
}
