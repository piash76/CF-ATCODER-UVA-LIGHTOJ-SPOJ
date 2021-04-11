
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

ll a[M],b[M],p1[M],p2[M],on[M],tw[M];



int main()
{


    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);


    ll t,i,j;
    cin>>t;
    while(t--)
    {
        ll n,m;cin>>n>>m;

        for(i=0;i<n;i++) cin>>a[i];   ///loss
        for(i=0;i<n;i++) cin>>b[i];  ///point



        ll sz1=0,sz2=0;

        for(i=0;i<n;i++)
        {
            if(b[i]==1) on[sz1++]=(a[i]);
            else if(b[i]==2) tw[sz2++]=a[i];
        }
        sort(on,on+sz1,greater<ll>());
        sort(tw,tw+sz2,greater<ll>());

        p1[0]=on[0];
        for(i=1;i<sz1;i++)
        {
            p1[i]=p1[i-1]+on[i];
        }

       // for(i=0;i<sz1;i++) cout<<p1[i]<<" ";
        //cout<<endl;

        p2[0]=tw[0];
        for(i=1;i<sz2;i++)
        {
            p2[i]=p2[i-1]+tw[i];
        }
      //  for(i=0;i<sz2;i++) cout<<p2[i]<<" ";
       // cout<<endl;


        ll ans=LLONG_MAX;

        ///all taken from 2
        ll idx=lower_bound(p2,p2+sz2,m)-p2;
        if(idx+1<=sz2) { ans=min(ans,2ll*(idx+1));  }

        for(i=0;i<sz1;i++)
        {
            ll s=(i+1);
            ll r=m-p1[i];

           // cout<<"REM "<<r<<endl;

            if(r<=0) ans=min(ans,s);
            else
            {


            ll idx=lower_bound(p2,p2+sz2,r)-p2;

           // cout<<"IDX "<<idx<<endl;

            if(idx+1<=sz2)
            {
                s+=(2*(idx+1));
                //cout<<"IDX+1 "<<idx+1<<" S "<<s<<endl;

                ans=min(ans,s);
            }

            }
        }


        ///all taken from 1
        ll idx2=lower_bound(p1,p1+sz1,m)-p1;
        if(idx2+1<=sz1) { ans=min(ans,(idx2+1)); }

        for(i=0;i<sz2;i++)
        {
            ll s=2*(i+1);
            ll r=m-p2[i];

           // cout<<"REM "<<r<<endl;

            if(r<=0) ans=min(ans,s);
            else
            {


            ll idx=lower_bound(p1,p1+sz1,r)-p1;

           // cout<<"IDX "<<idx<<endl;

            if(idx+1<=sz1)
            {
                s+=((idx+1));
                //cout<<"IDX+1 "<<idx+1<<" S "<<s<<endl;

                ans=min(ans,s);
            }

            }
        }



        //cout<<"ANS "<<ans<<endl;
        if(ans==LLONG_MAX) cout<<-1<<"\n";
        else cout<<ans<<"\n";





    }


}
