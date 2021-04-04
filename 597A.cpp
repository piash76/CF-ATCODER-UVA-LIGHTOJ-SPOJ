#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int i,j,k,l,m,n,t,a,b,f;
    cin>>t;
    while(t--)
    {

        cin>>a>>b;
        f=0;
        l=min(a,b);
        for(i=2;i<=l;i++)
        {
            if(a%i==0 && b%i==0)
            {
                f=1;
                break;
            }
        }
        if(f==1)
        {
            cout<<"Infinite"<<endl;
        }
        else
        {
            cout<<"Finite"<<endl;
        }

    }
}
