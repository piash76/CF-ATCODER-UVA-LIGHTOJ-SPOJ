

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
    cin>>t;
    while(t--)
    {
        string s;cin>>s;
        ll n=s.size();

        bool f=true;

        for(i=1;i<n;i++)
        {
            if(s[i]-'0'<s[i-1]-'0') {f=false;break;}
        }

        if(f) cy;
        else
        {
            bool f1=true;
            ll pos0=-1,pos1=-1;

            for(i=1;i<n;i++)
            {
                if(s[i]=='0' and s[i-1]=='0' and pos1!=-1) {f1=false;break;}

                if(s[i]=='1' and s[i-1]=='1') pos1=i;

            }

            if(f1) cy;
            else cn;




        }



    }

    return 0;

}



