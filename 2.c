
#include<stdio.h>
#include<math.h>
int main()
{

   float a,p=1000,r,n,j,k,i;

   r=5;
   for(i=1;i<=10;i++)
   {
       p=1000;
       if(r==10)
       {
           r=5;
       }
     k=(1+r/100);
     j=pow(k,i);
     a=p*j;
     printf("%f\n",a);
     r++;

   }


}
