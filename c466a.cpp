#include<bits/stdc++.h>
using namespace std;

int main()
{
    int  n,a,b,m,x,y,z,ans;

    cin>>n>>m>>a>>b;
    x=n*a;
    y=(n/m) * b + min((n%m) * a, b);

    ans=min(x,y);
    cout<<ans<<endl;
}
