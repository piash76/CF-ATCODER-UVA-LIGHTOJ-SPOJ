

///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>

#define ll long long
#define pll  pair<ll,ll>

#define ff    first
#define ss    second

#define  mp  make_pair
#define  pb  push_back




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
    ll n;cin>>n;
    ll na=(1<<n);
    ll mx=-1,idx;
    for(i=1;i<=na;i++)
    {
        cin>>a[i];
        if(a[i]>mx)
        {
            mx=a[i];idx=i;
        }
    }

    ll half=na/2;

    ll mx1=-1,idx1;

   // cout<<"IDX "<<idx<<endl;

    if(idx>half)
    {

   // cout<<"IDX "<<idx<<endl;
    for(i=1;i<=half;i++)
    {
        if(a[i]>mx1)
        {
            mx1=a[i];
            idx1=i;
        }
    }

    }
    else
    {
         for(i=half+1;i<=na;i++)
    {
        if(a[i]>mx1)
        {
            mx1=a[i];
            idx1=i;
        }
    }
    }




    cout<<idx1<<endl;


    return 0;

}





