#include<bits/stdc++.h>
using namespace std;

int main()
{
    int b,g,n,i,j,c=0,s;
    cin>>b>>g>>n;
    int a[b+1];
    for(i=0;i<=b;i++)
    {
        a[i]=i;
    }

    for(i=0;i<=b;i++)
    {
        if(n-a[i]>=0 && n-a[i]<=g)c++;

    }
    cout<<c<<endl;
}
