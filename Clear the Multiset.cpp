///Bismillahir Rahmanir Rahim
///ALLAHU AKBAR
#include<bits/stdc++.h>
#define flash() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);



using namespace std;
#define ll long long


ll a[5010];
ll n;

ll solve(ll l,ll r)
{
    //cout<<"L "<<l<<" R "<<r<<endl;

    //if(l==r) return 1;

    if(l>r) return 0;

    ll mn=1e18,idx=-1,ans;
    for(ll i=l;i<=r;i++)
    {
        if(mn>=a[i])
        {
            mn=a[i];
            idx=i;

        }
    }
    for(ll i=l;i<=r;i++) a[i]-=mn;

    ans=min(r-l+1,mn+solve(l,idx-1)+solve(idx+1,r));

    return ans;

}





int main()
{

    flash()
    ll i,j,k,t,cas=0;
    cin>>n;
    for(i=1;i<=n;i++) cin>>a[i];

    ll ans=solve(1,n);
    cout<<ans<<endl;







}



