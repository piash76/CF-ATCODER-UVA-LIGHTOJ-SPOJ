
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

ll a[M],b[M],pref[M];




int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);



    ll t,i,j;
    cin>>t;
    while(t--)
    {
        ll n;cin>>n;

        for(i=0;i<n+2;i++) cin>>b[i];

        sort(b,b+n+2);

        ll mx1=b[n+1],mx2=b[n];

        ll sm1=0,sm2=0;

        for(i=0;i<=n;i++) sm1+=b[i];

        for(i=0;i<n;i++) sm2+=b[i];

        //cout<<sm1<<" "<<sm2<<endl;

        if(sm2==mx2)
        {
            for(i=0;i<n;i++) cout<<b[i]<<" ";
            cout<<endl;
        }
        else
        {
           ll id=-1;

           for(i=0;i<=n;i++)
           {
               if(sm1-b[i]==mx1)
               {
                   id=i;break;
               }
           }

           if(id==-1) cout<<-1<<endl;
           else
           {
               for(i=0;i<=n;i++)
               {
                   if(i!=id) cout<<b[i]<<" ";
               }
               cout<<endl;
           }
        }







    }

    return 0;

}
