





///PROBLEM DESCRIPTION:


#include<bits/stdc++.h>

#define speed() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);



#define ll long long
#define cy  cout<<"YES"<<endl
#define cn   cout<<"NO"<<endl


using namespace std;




const int mod = 1000000007;


const int maxn =1000005;
ll a[maxn],b[maxn];


int main()
{


    speed()

    ll t,i,j,cas=0;
    cin>>t;
    while(t--)
    {

        ll n,p,k;cin>>n>>p>>k;
        for(i=1;i<=n+k+5;i++) b[i]=0;


        string s;cin>>s;
        for(i=1;i<=n;i++) a[i]=s[i-1]-'0';

        ll add,rem;cin>>add>>rem;

        for(i=n;i>=p;i--)
        {
            b[i]=b[i+k]+(1-a[i]);
        }

       // for(i=p;i<=n;i++) cout<<b[i]<<" ";
       // cout<<endl;

        ll ans=LLONG_MAX;

        ll m=0;
        for(i=p;n-m>=p;i++)
        {
            ll s=(b[i]*add)+(m*rem);

           // cout<<"S "<<s<<endl;

            ans=min(ans,s);
            m++;
        }

        cout<<ans<<endl;



    }

}



