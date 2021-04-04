





///PROBLEM DESCRIPTION:


#include<bits/stdc++.h>

#define speed() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);



#define ll long long
#define cy  cout<<"YES"<<endl
#define cn   cout<<"NO"<<endl
#define ff                      first
#define ss                      second

using namespace std;




const int mod = 1000000007;


const int mx =2000009;///1e6
ll suf1[mx],suf2[mx];


int main()
{


    speed()

    ll t,i,j,cas=0;
    ll n;cin>>n;


    ll ans=0,s=0;
    vector<ll> v;

    for(i=0;i<n;i++)
    {
        ll x,y;cin>>x>>y;
        s+=x;
        v.push_back(2*x+y);
    }

    sort(v.rbegin(),v.rend());

    ll sum=0;
    for(i=0;i<n;i++)
    {
        sum+=v[i];
        if(sum>s) {ans=i+1;break;}

    }

    cout<<ans<<endl;



    return 0;

}




