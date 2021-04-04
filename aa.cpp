#include<bits/stdc++.h>
#define ll long long
#define see_you return 0
#define godspeed() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
    godspeed()
    ll i,j,k,s,n,x,maxa;
    cin>>n;
    ll a[n],b[n]={0};
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    maxa=0;
    for(i=n-1;i>=0;i--)
    {
     x=a[i];
    //cout<<maxa<<endl;
    if(maxa>=x)
    {
        b[i]=maxa-a[i]+1;
    }
    maxa=max(maxa,x);
    }
    for(i=0;i<n;i++) cout<<b[i]<<" ";


    see_you;

}
