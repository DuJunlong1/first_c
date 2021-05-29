#include <stdio.h>
int main()
{
    float a,b,c,d=0.0036,e=0.0225,f=0.0198,z=1000;
    a=z*(1+d);
    b=z*(1+e);
    c=z*(1+f)*(1+f);
    printf("%f\n%f\n%f\n",a,b,c);
    return 0;
}//计算三种存钱方式利息