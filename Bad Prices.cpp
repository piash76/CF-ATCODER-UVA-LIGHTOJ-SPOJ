#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,t,k,s,c;
    cin>>t;
    while(t--)
    {
    c=0;
    cin>>n;
    int a[n];
    for(i=1;i<=n;i++)
    {
        cin>>a[i];

    }
    k=a[n];
    for(i=n-1;i>=1;i--)
    {
      if(k<a[i]) c++;
      else
      {
          k=min(a[i],k);
      }

    }
    cout<<c<<endl;
    }


}
