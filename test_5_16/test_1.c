#include<stdio.h>
struct Book//�ṹ������
{
    char name[20];
    short price;
};
int main()
{
    struct Book b1={"C���Գ������",55};
    printf("������%s\n",b1.name);
    b1.price=100;
    printf("�޸ĺ�ļ۸�:%dԪ\n",b1.price);
    return 0;
}

