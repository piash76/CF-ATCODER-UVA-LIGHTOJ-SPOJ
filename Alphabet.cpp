

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

ll a[26],dp[100];


int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll t,i,j;

    string s;cin>>s;

    ll n=s.size();

    dp[0]=1;
    for(i=1;i<n;i++)
    {
        dp[i]=1;
        for(j=0;j<i;j++)
        {
            if(s[j]<s[i]) dp[i]=max(dp[i],dp[j]+1);
        }
    }

    ll lis=-1;

    for(i=0;i<n;i++) lis=max(lis,dp[i]);

    cout<<26-lis<<endl;







    return 0;

}



