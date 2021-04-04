

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
    ll n;
    cin>>n;
    ll cnt=0,ans=0;

  ll cntba=0,cnta=0,cntb=0;
    while(n--)
    {
        string s;cin>>s;



        for(i=0;i<s.size();)
        {
            if(s[i]=='A' and s[i+1]=='B' and i+1<s.size()) { i+=2; ans++; }
            else i++;
        }


       if(s[0]=='B' and s[s.size()-1]=='A') cntba++;

       if(s[0]!='B' and s[s.size()-1]=='A') cnta++;

       if(s[0]=='B' and s[s.size()-1]!='A') cntb++;


    }

    if(cntba>0)
    {
        ans+=(cntba-1);

    if(cnta>0 and cntba>0) { ans++;cnta--; }
    if(cntb>0 and cntba>0) { ans++; cntb--; }

    ans+=min(cnta,cntb);


    }
    else
    {
        ans+=min(cnta,cntb);

    }

     cout<<ans<<endl;



    //cout<<"ANS "<<ans<<endl;



    return 0;

}



