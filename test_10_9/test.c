#include <stdio.h>
//结构体传参
struct S
{
    int a;
    char c;
    double d;
};
void Init(struct S* ps)
{
    ps->a = 100;
    ps->c = 'w';
    ps->d = 3.14;
}
//传参方式一：值传递
void Print1(struct S tmp)
{
    printf("%d %c %lf\n", tmp.a, tmp.c, tmp.d);
}
//传参方式二：地址传递
void Print2(struct S* ps)
{
    printf("%d %c %lf\n", ps->a, ps->c, ps->d);
}
int main()
{
    struct S s = {0};
    Init(&s);
    Print1(s);
    Print2(&s);
    /* s.a = 100;
    s.c = 'w';
    s.d = 3.14;
    printf("%d\n", s.a); */
    return 0;
}