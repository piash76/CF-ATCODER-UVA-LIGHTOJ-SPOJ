

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


    ll t,i,j;

    ll d,m,n;cin>>d>>m>>n;

    a[0]=0;

    for(i=1;i<=n;i++) cin>>a[i];

    ll sz=n+1;

    ll ans=0,lst_idx=0,s=0;
    bool f=false;


    while(1)
    {

        if(lst_idx==0)
        {
            s=0+m;
            ll idx=lower_bound(a,a+sz,s)-a;

            //cout<<"NXT "<<idx<<endl;
            if(s>=d) {f=true;break;}
            else if(a[idx]!=s and idx==1 ) {break;}
            else
            {
                if(a[idx]==s)
                {
                    lst_idx=idx;
                }
                else
                {
                     lst_idx=idx-1;
                }
                ans++;

            }
        }
        else
        {
            s=a[lst_idx]+m;
            ll nxt_idx=lower_bound(a,a+sz,s)-a;

            //cout<<"NXT "<<nxt_idx<<endl;
            //cout<<"LAST "<<lst_idx<<endl;

            if(s>=d) {f=true;break;}
            else if(a[nxt_idx]!=s and nxt_idx-1-lst_idx==0) {break;}
            else
            {
                ans++;
                if(a[nxt_idx]==s)
                {
                    lst_idx=nxt_idx;
                }
                else
                {
                     lst_idx=nxt_idx-1;
                }

            }

        }

    }


    if(f) cout<<ans<<"\n";
    else cout<<-1<<"\n";


    return 0;

}

/*

500
200
4
100 200 300 400

*/



