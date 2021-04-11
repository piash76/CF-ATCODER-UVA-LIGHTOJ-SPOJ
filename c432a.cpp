#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,s=0,i,r,t;
    cin>>n>>k;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        r=a[i]+k;
        if(r<=5)
        {
            s++;
        }
    }

   t=s/3;
   cout<<t<<endl;

}
