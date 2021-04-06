





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


const int mx =1000009;///1e6
ll a[mx],b[mx];


int main()
{


    speed()

    ll t,i,j,cas=0;
    ll n;cin>>n;

    for(i=0;i<n;i++) cin>>a[i];

    ll lislen=0,idx;


    for(i=0;i<n;i++)
    {
        idx=upper_bound(b,b+lislen,a[i])-b;

        lislen=max(lislen,idx+1);

        b[idx]=a[i];

    }

    cout<<lislen<<endl;

    return 0;

}




