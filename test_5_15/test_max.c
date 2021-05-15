#include <stdio.h>
int max(int x,int y)
{
    int z;
    if(x>y)z=x;
    else z=y;
    return z;
}
int main()
{
    int a=4,b=7,c;
    c=max(a,b);
    printf("max=%d\n",c);
    return 0;
}