

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
const int M=500005;

ll a[M];


int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll t,i,j;

    ll n;cin>>n;
    for(i=0;i<n;i++) cin>>a[i];


    ll ans=LLONG_MAX;

    for(ll mask=0;mask<=((1<<n-1)-1);mask++)
    {
        ll o_r=0,x_or=0;

        //cout<<"MASK "<<mask<<endl;

        for(i=0;i<n;i++)
        {

            if(i<=n-1) o_r|=a[i];

            if(i==n-1 or (mask&(1<<i)) )
            {
                x_or^=o_r;
                o_r=0;
            }
       // cout<<"ANS "<<x_or<<endl;

        }

        ans=min(ans,x_or);

    }

    cout<<ans<<endl;


    return 0;

}



