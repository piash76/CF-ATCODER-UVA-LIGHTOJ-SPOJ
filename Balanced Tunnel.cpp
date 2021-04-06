#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n,i,j,k,x,y,z,w;

    cin>>n;
    ll a[n],b[n],m1[n],m2[n],c[n];
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        z=a[i];
        m1[z]=i;

    }
    for(i=1;i<=n;i++)
    {
        cin>>b[i];
        w=b[i];
        m2[w]=i;

    }
    ll c1=0,mx=-1;
    for(i=1;i<=n;i++)
    {
        x=a[i];
        c[i]=m2[x];
         //cout<<c[i]<<endl;

    }
    for(i=1;i<=n;i++)
    {
        if(c[i]>mx)
        {
            mx=c[i];
        }
        else
        {
            c1++;
        }
    }
    cout<<c1<<endl;



}
