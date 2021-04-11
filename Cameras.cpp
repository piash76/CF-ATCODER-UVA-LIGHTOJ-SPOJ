

///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>

#define ll long long
#define pll  pair<ll,ll>

#define ff    first
#define ss    second

#define  mp  make_pair
#define  pb  push_back

#define cy  cout<<"YES"<<endl
#define cn   cout<<"NO"<<endl


using namespace std;

const ll inf=1e18;
const int mod=1e9+7;
const int mod2=2147483647; ///2^31-1
const int M=100005;

ll a[M],tree[4*M];


void build(ll node,ll b,ll e)
{
    if(b==e)
    {
        tree[node]=a[b];
        return;
    }
    ll left=2*node;
    ll right=(2*node)+1;
    ll mid=(b+e)/2;
    build(left,b,mid);
    build(right,mid+1,e);

   tree[node]=(tree[left]+tree[right]);
}

ll query(ll node,ll b,ll e,ll i,ll j)
{
    if(i>e || j<b) return 0; ///out of range

    if (b >= i && e <= j) return tree[node]; ///correct range  ///i --b--e--j
    ll left=2*node;
    ll right=(2*node)+1;
    ll mid=(b+e)/2;
    ll x=query(left,b,mid,i,j);
    ll y=query(right,mid+1,e,i,j);

    return x+y;

}

void update(ll node,ll b,ll e,ll i,ll value)
{
    if(i>e or i<b) return; ///out of range
    if(b>=i and e<=i)     ///correct range  or overlapping range
    {
        tree[node]=value;
        return;
    }

    ll left=2*node;
    ll right=(2*node)+1;
    ll mid=(b+e)/2;
    update(left,b,mid,i,value);
    update(right,mid+1,e,i,value);

    tree[node]=(tree[left]+tree[right]);


}

int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll t,i,j;

    ll n,k,r;cin>>n>>k>>r;

    for(i=1;i<=k;i++)
    {
        ll x;cin>>x;
        a[x]=1;
    }

   // for(i=1;i<=n;i++) cout<<a[i]<<" ";
    //cout<<endl;

    build(1,1,n);


   // cout<<query(1,1,n,1,5)<<endl;

    ll s=0;
    for(i=1;i+r-1<=n;i++)
    {
        ll sm=query(1,1,n,i,i+r-1);

        //cout<<"I "<<i<<" SUM "<<sm<<endl;

        if(sm==0)
        {
            a[i+r-1]=1;
            a[i+r-2]=1;

            update(1,1,n,i+r-1,1);
            update(1,1,n,i+r-2,1);


            s+=2;

        }
        else if(sm==1)
        {
            if(a[i+r-1]==0)
            {
                a[i+r-1]=1;
                update(1,1,n,i+r-1,1);
            }
            else
            {
                a[i+r-2]=1;
                update(1,1,n,i+r-2,1);
            }
            s++;
        }
    }

    cout<<s<<"\n";




    return 0;

}

/*

15 5 4
2
5
7
10
13

*/


