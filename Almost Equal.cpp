#include<bits/stdc++.h>
#define ll long long
#define bye return 0
#define godspeed() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define inf 1e9
using namespace std;

int main()
{
    godspeed()
    int n,i,j,k,l,m;

    cin>>n;
    int v[2*n+5];
    if(n%2==0)
    {
        cout<<"NO"<<endl;
        bye;
    }
    cout<<"YES"<<endl;
    for(i=1;i<=n;i++)
    {
        v[i]=2*i-1;
    }
    for(i=1;i<=n;i++)
    {
        v[n+i]=2*i;
    }
    for(i=2;i<=n;i+=2)
    {
        swap(v[i],v[n+i]);
    }
    for(i=1;i<=2*n;i++)
    {
        cout<<v[i]<<" ";
    }
    bye;
}
