#include<bits/stdc++.h>
#define ll long long
#define see_you return 0
#define godspeed() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
    godspeed()
    ll i,j,k,n,m,odd,t;
    cin>>t;
    while(t--)
    {
        odd=0;
        cin>>n>>k;
        ll a[n+5];
        vector<ll> v;
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
            if(a[i]%2)
            {
                odd++;
                v.push_back(i);
            }
        }
        if(odd<k) cout<<"NO"<<endl;
        else if(odd>=k && odd%2==k%2)
        {
            cout<<"YES"<<endl;
            for(i=0;i<=k-2;i++)
            {
                cout<<v[i]<<" ";
            }
            cout<<n<<endl;
        }
    }


}
