#include<bits/stdc++.h>

using namespace std;

int main()
{
   long long int n,p,i,j=0,k;
   cin>>n>>p;
   int a[n];
   for(i=1;i<=n;i++)
   {
       if(i%2!=0)
       {
           a[j]=i;
           j++;
       }
   }

   k=j;
   for(i=1;i<=n;i++)
   {
       if(i%2==0)
       {
           a[k]=i;
           k++;
       }
   }

   cout<<a[p-1]<<endl;








}
