#include<bits/stdc++.h>
using namespace std;

int main()
{
    int j,t,r,i,n,c,x,v;
    cin>>t;
    while(t--)
    {

        cin>>n;
        int a[n];
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
        }

        for(i=1;i<=n;i++)
        {
            c=1;
            x=a[i];
            while(a[x]!=a[i])
            {
                c++;
                x=a[x];
            }
            cout<<c<<" ";

        }
        cout<<endl;

    }
}
