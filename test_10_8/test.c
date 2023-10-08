#include<stdio.h>
#include<stddef.h>
//结构体的声明
/* struct tag
{
    member_list
}variable_list;
 */

//声明一个结构体类型
//声明一个学生类型，通过学生类型来创建学生变量（对象）
//描述学生：姓名，电话，性别，年龄
/* struct Stu
{
    char name[20];
    char tele[12];
    char sex[10];
    int age;
}s3,s4,s5;//分号不能省略
int main()
{
    struct Stu s1; 
    return 0;
} */

//匿名结构体类型
/* struct S
{
    int a;
    char c;
}sa;
struct S
{
    int a;
    char c;
}* psa;
int main()
{
    psa = &sa;
    return 0;
} */
//编译器会认为是两种不同的类型

//结构体的自引用
/* struct Node
{
    int data;
    struct Node* next;
};
int main()
{
    return 0;
} */
//结构体自引用不建议使用匿名结构体类型
/* typedef struct Node
{
    int data;
    struct Node* next;
}Node;
int main()
{
    struct Node n1;
    Node n2;
    return 0;
}  */

//结构体变量的定义和初始化
/* struct T
{
    double weight;
    short age;
};
struct S
{
    char c;
    struct T st;
    double d;
    char arr[20];
};
int main()
{
    //struct S s = {'w', 100, 3.14, "bit"};
    struct S s = {'w', {100, 90}, 3.14, "bit"};
    printf("%c %d %lf %s\n", s.c, s.d, s.arr);
    printf("%lf\n", s.st.weight);
    return 0;
} */

//结构体的内存对齐
struct S1
{
    char c1;
    int a;
    char c2;
};
struct S2
{
    char c1;
    char c2;
    int a;
};
struct S3
{
    char c1;
    struct S2 s2;
    int i;
};
int main()
{
    //struct S1 s1 = {0};
    //printf("%d\n",sizeof(s1));
    //struct S2 s2 = {0};
    //printf("%d\n",sizeof(s2));
    struct S2 s2 = {0};
    printf("%d\n",sizeof(s2));
    return 0;
}
//结构体的内存对齐是为了提高效率：拿空间换时间
//结构体的内存对齐规则：
//1.第一个成员在与结构体变量偏移量为0的地址处
//2.其他成员变量要对齐到某个数字（对齐数）的整数倍的地址处
//3.对齐数 = 编译器默认的一个对齐数与该成员大小的较小值
//4.结构体总大小为最大对齐数的整数倍
//5.如果嵌套了结构体，嵌套的结构体对齐到自己的最大对齐数的整数倍处
//6.可以通过#pragma pack(n)修改对齐数为n
//7.取消自定义对齐数，可以通过#pragma pack()恢复默认对齐数
//8.结构体内成员的地址是连续的，结构体的地址是成员地址的最小值

//设置默认对齐数为4
#pragma pack(4)
struct S
{
    char c1;
    double d;
};
int main()
{
    struct S s;
    printf("%d\n", sizeof(s));
    return 0;
}


struct S
{
    char c1;
    int i;
    double d;
};
int main()
{
    printf("%d\n",offsetof(struct S, c1));
    printf("%d\n",offsetof(struct S, i));
    printf("%d\n",offsetof(struct S, d));
    return 0;
}

