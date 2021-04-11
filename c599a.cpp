#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int n,i,j,k,m,a,b,c,x,y,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
         sort(a,a+n);
         m=0;
        for(i=0;i<n;i++)
        {
           x=a[i];
           c=0;
           for(j=i+1;j<n;j++)
           {
               if(a[j]>=x)
               {
                   c++;
               }
           }
           if(c>=x)
           {
               m=max(m,x);
           }

        }
        cout<<m<<endl;


    }
}
