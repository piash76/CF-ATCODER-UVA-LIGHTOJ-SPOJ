
#include<stdio.h>

int main()
{
    int i,m=1,s=0;

    for(i=1;i<=15;i=i+2)
    {
        s=s+i;
        m=m*i;
    }


     printf("%d\n",s);
      printf("%d\n",m);

}
