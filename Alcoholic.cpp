

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
const int M=500005;

ll v[M],p[M];


int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    ll t,i,j;
    ll n,x;cin>>n>>x;

    for(i=1;i<=n;i++) cin>>v[i]>>p[i];

    ll ans=-1,s=0;

    for(i=1;i<=n;i++)
    {
        if(s+v[i]*p[i]>x*100) {ans=i;break;}

        s+=(v[i]*p[i]);
    }

    cout<<ans<<endl;




    return 0;

}





