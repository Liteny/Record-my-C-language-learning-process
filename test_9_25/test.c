#include<stdio.h>
//递归
/* int main()
{
    printf("hehe\n");
    main();
    return 0;
} */

/* //接受一个整型值（无符号），按照顺序打印它的每一位。例如：输入1234，输出1 2 3 4
void print(int n)
{
    if(n>9)//递归的限制条件
    {
        print(n/10);//每次递归后越来越接近限制条件
    }
    printf("%d ",n%10);
}
int main()
{
    unsigned int num = 0;
    scanf("%d",&num);
    print(num);
    return 0;
} */

//编写函数不允许创建临时变量，求字符串长度
/* int my_strlen(char* str)
{
    int count = 0;
    while(*str != '\0')
    {
        count++;
        str++;
    }
    return count;
} */ 
/* int my_strlen(char* str)
{
    if(*str != '\0')
    {
        return 1+my_strlen(str+1);
    }
    else
    {
        return 0;
    }
}
int main()
{
    char arr[] = "bit";
    //int len = strlen(arr);
    //printf("%d\n",len);
    int len = my_strlen(arr);
    printf("%d\n",len);
    return 0;
} */

//求n的阶乘（不考虑溢出）
/* int fac(int n)
{
    if(n<=1)
    {
        return 1;
    }
    else
    {
        return n*fac(n-1);
    }
}
int main()
{
    int n = 0;
    scanf("%d",&n);
    int ret = fac(n);
    printf("%d\n",ret);
    return 0;
} */
//有一些功能可以使用递归来实现，也可以使用循环来实现，那么优先使用循环，因为递归的效率比较低

//求第n个斐波那契数（不考虑溢出）
/* int count = 0;
int fib(int n)
{
    if (n == 3)//计算fib(3)的次数
    count++;
    if(n<=2)
    {
        return 1;
    }
    else
    {
        return fib(n-1)+fib(n-2);
    }
}
int main()
{
    int n = 0;
    scanf("%d",&n);
    int ret = fib(n);
    printf("%d\n",ret);
    printf("%d\n",count);
    return 0;
}*/
//使用循环的方法求第n个斐波那契数
/* int fib(int n)
{
    int a = 1;
    int b = 1;
    int c = 1;
    while(n>2)//1 1 2 3 5 8 13 21 34 55
    {
        c = a+b;
        a = b;
        b = c;
        n--;
    }
    return c;
}
int main()
{
    int n = 0;
    scanf("%d",&n);
    int ret = fib(n);
    printf("%d\n",ret);
    return 0;
} */

//使用递归实现汉诺塔问题
void move(char src,char dest)
{
    printf("%c-->%c\n",src,dest);
}


//使用递归实现青蛙跳台阶问题
int jump(int n)
{
    if(n<=2)
    {
        return n;
    }
    else
    {
        return jump(n-1)+jump(n-2);
    }
}