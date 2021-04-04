#include<iostream>
using namespace std;

int prime(int n)
{
    int i;
    if(n==1)return 0;
    if(n==2)return 1;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)return 0;
    }
    return 1;
}
int main()
{
   int i,n,r;
   cin>>n;
   for(i=1;i<=n;i++)
   {
      r=prime(i);
      if(r==1)cout<<i<<" ";
   }
}
