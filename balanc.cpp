#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,j,f=1,x;
    cin>>n;
    while(n--)
    {
        cin>>x;
        if(x%2==0) cout<<x/2<<endl;
        else if(x%2!=0 && f==1)
        {
            cout<<(x-1)/2<<endl;
            f=0;

        }
        else if(x%2!=0 && f==0)
        {
            cout<<(x+1)/2<<endl;
            f=1;
        }

    }
}
