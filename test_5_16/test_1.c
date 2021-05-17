#include<stdio.h>
struct Book//结构体类型
{
    char name[20];
    short price;
};
int main()
{
    struct Book b1={"C语言程序设计",55};
    printf("书名：%s\n",b1.name);
    b1.price=100;
    printf("修改后的价格:%d元\n",b1.price);
    return 0;
}

