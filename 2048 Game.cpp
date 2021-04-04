#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t,i,j,s,x;
    cin>>t;
    while(t--)
    {
        s=0;
        cin>>n;

        for(i=1;i<=n;i++)
        {
            cin>>x;
            if(x<=2048)
            {
                s+=x;
            }

        }

        if(s>=2048) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

