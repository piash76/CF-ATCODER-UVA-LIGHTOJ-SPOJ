#include<bits/stdc++.h>

using namespace std;

int main()
{
   long long n,p,m;
   cin>>n>>p;
   if(n%2==0)
   {
       m=n/2;
   }
   else
   {
       m=n/2+1;
   }
   if(p<=m)
   {
       cout<<2*p-1<<endl;
   }
   else
   {
       cout<<2*(p-m)<<endl;
   }
}
