
#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll mod=1e9+7;
ll fact[200010];
void fff()
{
    fact[0]=1;
    for(int i=1;i<=200000;i++)
    {
        fact[i]=(i*fact[i-1])%mod;
        //cout <<fact[i]<<endl;
    }


}

ll big(ll n,ll p)
{
    if(p==0)
        return 1;

    if(p%2)
        return (n*big(n,p-1))%mod;
    else
    {
        ll c=big(n,p/2);
        return (c*c)%mod;
    }



}
ll ncr(ll n,ll r)
{
    if(r==0)
    {
        return 0;
    }
    ll ret=fact[n];
    ret=(ret*big(fact[n-r],mod-2))%mod;
    ret=(ret*big(fact[r],mod-2))%mod;
    return ret;



}
int main()
{
    fff();
    int n,r;
    cin>>n>>r;
    cout<<ncr(n,r);



}
