#include <stdio.h>
//获取两个数，从小到大排序
int main()
{
    float a,b,x;
    scanf("%f,%f"&a,&b);
    if(a>b)
    {
        x=a;
        a=b;
        b=x;
    }
    printf("%5.2f,%5.2f\n"a,b);
    return 0;
}