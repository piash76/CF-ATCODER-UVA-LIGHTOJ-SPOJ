#include<stdio.h>
main()
{
    double n,m,a;
    scanf("%lf %lf %lf",&n,&m,&a);
    long long int x,y;
    long long int s;
    x=n/a;
    y=m/a;
    if(x!=n/a)
    {
        x=x+1;
    }
    if(y!=m/a)
    {
        y=y+1;
    }
    s=x*y;
    printf("%lld",s);
}
