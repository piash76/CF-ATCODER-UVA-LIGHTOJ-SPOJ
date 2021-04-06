#include<bits/stdc++.h>
#define ll long long
#define see_you return 0
#define godspeed() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define inf 1e9
using namespace std;

int main()
{
    godspeed()
    int n,i,j,k,l,m,t,bg,f;
    cin>>t;
    while(t--)
    {

        cin>>n>>m>>k;
        int a[n];
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        int f=1;
        for(i=1;i<n;i++)
        {
            if(a[i]==a[i+1])
            {
                m+=min(a[i],k);
            }
            else if(a[i]<a[i+1])
            {
                int y=max(0,a[i+1]-k);
                //cout<<y<<endl;
                if(y>a[i])
                {

                   m-=(y-a[i]);
                  if(m<0)
                  {

                    f=0;
                    break;
                  }
                }
                else
                {
                    m+=(a[i]-y);
                }
            }
            else if(a[i]>a[i+1])
            {
                int x=a[i]-max(0,a[i+1]-k);
                m+=x;
            }
           // cout<<m<<endl;
        }
        if(f) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    see_you;
}
