#include<stdio.h>
//描述一个学生
//名字
//年龄
//性别
//电话

//struct 结构体关键字    Stu 结构体标签        struct Stu 结构体类型
/* struct Stu
{
    //成员变量
    char name[20];
    short age;
    char tele[12];
    char sex[5];
}; *///s1, s2, s3;//是三个全局结构体变量
/* typedef struct Stu
{
    //成员变量
    char name[20];
    short age;
    char tele[12];
    char sex[5];
}Stu;
int main()
{
    struct Stu s1 = {"张三", 20, "12345678901", "男"};
    Stu s2 = {"李四", 21, "12345678902", "男"};
    return 0;
} */

/* struct S
{
    int a;
    char c;
    char arr[20];
    double d;
};
struct T
{
    char ch[10];
    struct S s;
    char *pc;;
};
int main()
{
    char arr[] = "abcdef";
    struct T t = {"hello", {100, 'w', 'hello world', 3.14}, arr};
    printf("%s\n", t.ch);
    printf("%d\n", t.s.arr);
    printf("%s\n", t.pc);
    return 0;
} */

//结构体成员变量的访问
/* typedef struct Stu
{
    //成员变量
    char name[20];
    short age;
    char tele[12];
    char sex[5];
}Stu;
void Print1(Stu tmp)
{
    printf("name: %s\n", tmp.name);
    printf("age: %d\n", tmp.age);
    printf("tele: %s\n", tmp.tele);
    printf("sex: %s\n", tmp.sex);
}
void Print2(Stu* ps)
{
    printf("name: %s\n", ps->name);
    printf("age: %d\n", ps->age);
    printf("tele: %s\n", ps->tele);
    printf("sex: %s\n", ps->sex);
}
int main()
{
    Stu s = {"张三", 20, "12345678901", "男"};
    //打印结构体数据
    //Print2节省了内存空间
    Print1(s);  
    Print2(&s);
    return 0;
} */

int Add(int x, int y)
{
    return x + y;
}
int main()
{
    int a = 10;
    int b = 20;
    int ret = a + b;
    ret = Add(a,b);//传参时压栈操作
    return 0;
}