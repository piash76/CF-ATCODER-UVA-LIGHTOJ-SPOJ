#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n,k,cnt=0,b=0,r=0,d=0,f=0;
   cin>>n>>k;
   int a[n];
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }

   for(int i=0;i<n;i++)
   {
       if(a[i]==0)
       {
           cnt++;
       }
   }

   for(int i=0;i<k;i++)
   {
       if(a[i]!=0)
       {
           f++;
       }
   }


   if(cnt==n)
   {
       cout<<"0"<<endl;
       return 0;
   }


   if(f!=k)
   {
      cout<<f<<endl;
      return 0;
   }


else
{
     r=k;

    for(int i=k;i<n;i++)
     {
       if(a[i]>=a[k-1])
       {
           b++;;
       }
     }
     r=r+b;
     cout<<r<<endl;
     return 0;


}

}
