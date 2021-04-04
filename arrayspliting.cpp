#include<bits/stdc++.h>
#define ll long long
#define see_you return 0
#define godspeed() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
    godspeed()
    ll i,j,n,m,k,l,t,c=0;
    cin>>n>>k;
    int a[n];
    for(i=0;i<n;i++) cin>>a[i];
    vector<ll> v;
    for(i=1;i<n;i++) v.push_back(a[i]-a[i-1]);
    for(i=0;i<n-k;i++) c+=v[i];
    cout<<c<<endl;
    see_you;

}
