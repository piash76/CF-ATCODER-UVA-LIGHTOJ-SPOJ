#include<bits/stdc++.h>
#define ll long long
#define bye return 0
#define godspeed() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define inf 1e9
using namespace std;

int main()
{
    godspeed()
    int t,i,j,n,k,f;
    cin>>t;
    while(t--)
    {
        f=0;
        cin>>n;
        int a[n];
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        f=1;
        for(i=1;i<n;i++)
        {
           if( (abs(a[i]-a[i+1])==1) || (abs(a[i]-a[i+1])==n-1) )
           {
               continue;
           }
           else
           {
               f=0;
               break;
           }
        }
       if(f) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
    }
    bye;
}
