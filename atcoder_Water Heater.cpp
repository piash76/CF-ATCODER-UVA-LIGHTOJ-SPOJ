
#include<bits/stdc++.h>



using namespace std;
#define ll long long

const int maxn = 200005;

struct seg
{
    ll sum,lazy;
};

ll a[maxn];
seg tree[4*maxn];
ll n,h;


void build(ll node,ll b,ll e)
{
    if(b==e)
    {
        tree[node].sum=0;
        tree[node].lazy=0;
        return;
    }

    ll mid=(b+e)/2;
    ll left=2*node;
    ll right=(2*node)+1;

    build(left,b,mid);
    build(right,mid+1,e);

    tree[node].sum=tree[left].sum+tree[right].sum;
    tree[node].lazy=0;
}







int main()
{
    ll i,j;
    scanf("%lld %lld",&n,&h);

    ll mx=-1;

   //build(1,1,mx);
    vector<pair<ll,pair<ll,ll> > >v;

    while(n--)
    {
        ll l,r,val;
        scanf("%lld %lld %lld",&l,&r,&val);

        v.push_back({l,{r,val}});

        mx=max(mx,r);
    }




}
