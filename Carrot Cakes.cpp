
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

ll a[M];


int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    ll n,t,k,d;cin>>n>>t>>k>>d;

    ll b ;

    if (n%k == 0)
    {
        b = n/k ;
    }
    else
    {
        b = n/k + 1 ;
    }

    if ( (b-1)*t > d )
    {
        cy;
    }
    else
    {
       cn;
    }

    return 0;

}
