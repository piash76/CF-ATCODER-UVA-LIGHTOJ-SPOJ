






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
    vector<pair<string,string> > v;

    for(i=1;i<=n;i++)
    {
        string s1,s2;cin>>s1>>s2;
        v.push_back({s2,s1});
    }
    sort(v.begin(),v.end());

    for(auto x:v) cout<<x.ss<<" "<<x.ff<<endl;


    return 0;

}
/*
3
John Adams
Bob Adam
Bob Adams

*/



