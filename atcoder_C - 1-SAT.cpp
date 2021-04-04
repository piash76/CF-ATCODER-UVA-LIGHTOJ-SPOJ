





///PROBLEM DESCRIPTION:


#include<bits/stdc++.h>

#define speed() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);



#define ll long long
#define pll             pair<ll,ll>
#define cy  cout<<"YES"<<endl
#define cn   cout<<"NO"<<endl
#define ff                      first
#define ss                      second

using namespace std;




const int mod = 1000000007;


const int mx =1000009;///1e6
ll a[mx];


int main()
{


    speed()

    ll t,i,j,cas=0;
    ll n;cin>>n;

    map<string,ll> cnt1,cnt2,fin;

    for(i=1;i<=n;i++)
    {
        string s;cin>>s;
        if(s[0]!='!') cnt1[s]++;

        if(s[0]=='!')
        {
            cnt2[s]++;
        }
    }

    for(auto x:cnt2)
    {
        string st=x.ff;
        string st2(st.begin()+1,st.end());

       // cout<<"ST2 "<<st2<<endl;

        if(cnt1[st2]) fin[st2]+=x.ss;
    }

    string ans;

    bool f=false;
    for(auto x:fin) if(x.ss>=1) { ans=x.ff;f=true;break; }

    if(f) cout<<ans<<endl;
    else cout<<"satisfiable"<<endl;

    return 0;

}




