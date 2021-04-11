#include<bits/stdc++.h>
#define ll long long
#define see_you return 0
#define godspeed() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
    godspeed()
    ll i,j,n,m,k,l,t,x,y,r;
        cin>>n>>x>>y;

   ll a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    l=1;
    if(n==x)
    {
     m=a[0];
     for(i=1;i<n;i++)
     {
         if(m>a[i])
         {
             m=a[i];
             r=i;
             l=0;
         }
         else
         {
             l=1;
         }

     }
     if(l) cout<<1<<endl;
     else cout<<r+1<<endl;
     see_you;
    }
   for( i = 0; i < n; i++)
    {
        long long s= a[i];
        int f1=0, f2 = 0;
        for( j = i - x; j < i && j>0  ; j++)
        {
            if(s> a[j])
                f1 = 1;
        }

        for( j = i + 1; j <= i + y && j<n ; j++)
        {
            if(s> a[j])
                f2 = 1;
        }

        if(f1 == 0 && f2 == 0)
        {
            cout << i + 1 << endl;
            see_you;
        }
    }

}




