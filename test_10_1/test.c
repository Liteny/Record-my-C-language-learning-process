#include <stdio.h>
//逻辑操作符 || && !
//逻辑或 || 逻辑与 && 逻辑非 !
/* int main()
{
    int i = 0, a = 0, b = 2, c = 3, d = 4;
    i = a++ || ++b && c || d++;
    printf("a = %d, b = %d, c = %d, d = %d, i = %d\n", a, b, c, d, i);
    return 0;
} */
//a = 1, b = 3, c = 3, d = 4, i = 1

//条件操作符 ?:
/* int main()
{
    int a = 10;
    int b = 20;
    int max = 0;
    max = (a > b ? a : b);
       if(a > 5)
       b = 3;
    else
       b = -3;
    b = (a > 5 ? 3 : -3); 
    return 0;
} */

//逗号表达式 , 从左到右依次执行，最后一个表达式的值为整个表达式的值
/* int main()
{
    int a = 1;
    int b = 2;
    int c = (a > b, a = b + 10, a, b = a + 1);
    return 0;
} */

//下标引用操作符 []
/* int main()
{
    int a[10] = {0};
    a[4] = 10;
    return 0;
}
 */

//函数调用操作符 ()
/* int get_max(int x, int y)
{
    return x > y ? x : y;
}
int main()
{
    int a = 10;
    int b = 20;
    int max = get_max(a, b);//函数调用
    printf("max = %d\n", max);
    return 0;
}  */

//成员引用操作符 . 结构体指针->
//创建一个结构体类型-struct Stu
/* struct Stu
{
    //成员变量
    char name[20];
    int age;
    char id[20];
};
int main()
{
    int a = 10;
    //使用一个结构体类型-struct Stu创建了一个学生对象s，并初始化
    struct Stu s = {"student", 20, "20201111"};
    struct Stu *ps = &s;

    printf("%s\n",(*ps).name);
    //结构体指针->成员名
    printf("%s\n", ps->name);
    printf("%d\n", ps->age);

    //printf("%s\n", s.name);
    //printf("%d\n", s.age);
    //printf("%s\n", s.id);
    return 0;
}
 */

//表达式求值
//整型提升
/* int main()
{
    char a = 3;
    //00000000000000000000000000000011
    //00000011 - a
    char b = 127;
    //00000000000000000000000001111111

    //a和b如何相加 - 先将a和b进行整型提升，然后再进行加法运算
    //01111111
    //00000011
    //00000000000000000000000010000010
    //10000010 - c

    char c = a + b;
    //11111111111111111111111110000010 - 补码
    //11111111111111111111111110000001 - 反码
    //10000000000000000000000001111110 - 原码
    //-126
    printf("c = %d\n", c);

    return 0;
} */
//实例1
/* int main()
{
    char a = 0xb6;
    short b = 0xb600;
    int c = 0xb6000000;
    if(a==0xb6)
        printf("a");
    if(b==0xb600)
        printf("b");
    if(c==0xb6000000)
       printf("c");
 return 0;
} */

//错误代码
int main()
{
    int i = 1;
    int a = (++i) + (++i) + (++i);
    printf("%d\n", a);
    return 0;
}
