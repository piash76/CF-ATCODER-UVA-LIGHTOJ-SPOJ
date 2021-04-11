#include<bits/stdc++.h>

using namespace std;

int main()
{
   int n,i,r,c=0,d=0,suma=0,sumb=0,t=0;
   float a1=0,b=0;
   cin>>n;
   int a[n];
   for(i=0;i<n;i++)
   {
       cin>>a[i];
       if(a[i]==1)
       {
           a1++;
           suma=suma+a1;

       }
       else if(a[i]==2)
       {
           b++;
           sumb=sumb+b;
       }
       else if(a[i]==3)
       {
           c++;
       }
       else
       {
           d++;
       }
   }

   a1=(float)(suma/4);
   b=(float)(sumb/4);
   if(a1>=1)
   {
      a1=a1;
   }
    if(b>=1)
   {
      b=b;
   }
   if((a1>0 && a1<1) && (b>0 && b<1))
   {
       a1=a1+b;;
       b=0;
   }
   cout<<(int)(a1+b+c+d)<<endl;

}

