

///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>

#define ll long long
#define pll  pair<ll,ll>
#define ff    first
#define ss    second
#define  mp  make_pair
#define  pb  push_back

using namespace std;

const int N=500005;

ll a[N],b[N],cnt1[N],cnt2[N];


int main()
{


    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll t,i,j;
    cin>>t;
    while(t--)
    {
        ll boy,grl,k;cin>>boy>>grl>>k;

        for(i=0;i<=boy+5;i++) cnt1[i]=0;
        for(i=0;i<=grl+5;i++) cnt2[i]=0;

        for(i=0;i<k;i++) { cin>>a[i]; cnt1[a[i]]++; }
        for(i=0;i<k;i++) { cin>>b[i]; cnt2[b[i]]++; }

        ll s=0;
        for(i=0;i<k;i++)
        {
            ll x=cnt1[a[i]]-1;
            ll y=cnt2[b[i]]-1;

            s+=(x+y);

        }



        cout<<((k*(k-1))-s)/2<<endl;

    }

    return 0;

}





