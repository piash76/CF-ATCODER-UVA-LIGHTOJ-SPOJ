
#include<bits/stdc++.h>


const int maxn = 211111;
#define ll long long


using namespace std;


ll a[maxn],b[maxn];

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;

        if(abs(x2-x1)==0 or abs(y2-y1)==0) cout<<abs(x2-x1)+abs(y2-y1)<<endl;
        else cout<<abs(x2-x1)+abs(y2-y1)+2<<endl;





    }



}

