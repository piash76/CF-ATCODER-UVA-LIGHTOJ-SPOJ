
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




    ll t,i,j;
    scanf("%lld",&t);
    while(t--)
    {
        ll n;scanf("%lld",&n);
        multiset<ll,greater<ll>> s;

        for(i=0;i<2*n;i++) { scanf("%lld",&a[i]);s.insert(a[i]); }

        sort(a,a+2*n);
        ll mx=a[2*n-1];
        s.erase(s.find(mx));

        bool yes=false;

        for(i=0;i<2*n-1;i++)
        {


            ll x=mx; ///x  14

            bool f=true;

            multiset<ll,greater<ll>> s2=s;

            s2.erase(s2.find(a[i])); ///7

           // cout<<"S2 "<<endl;
           // for(auto x:s2) cout<<x<<" ";
           // cout<<endl;

            vector<pll> v;

            while(!s2.empty())
            {
                ll new_x=*s2.begin(); ///11
                 s2.erase(s2.find(new_x)); ///11

                ll y=x-new_x; ///3

               //cout<<"NEW "<<new_x<<" Y "<<y<<endl;

                if(s2.find(y)!=s2.end())
                {

                    s2.erase(s2.find(y));

                    v.push_back({new_x,y});

                    x=max(new_x,y);
                }
                else
                {
                    f=false;break;
                }
            }


            if(f and s2.empty())
            {
                cy;
                cout<<mx+a[i]<<endl;
                cout<<mx<<" "<<a[i]<<endl;
                for(auto x:v) cout<<x.ff<<" "<<x.ss<<endl;
                yes=true;
                break;
            }


        }

        if(!yes) cn;




    }

    return 0;

}





