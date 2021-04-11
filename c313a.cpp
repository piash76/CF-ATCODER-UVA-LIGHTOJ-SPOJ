#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,y,d,ans;
    cin>>n;
    if(n<0)
    {
        x=n/10;
        d=n%10;
        y=(n/100)*10+d;
        ans=max(x,y);
        cout<<ans<<endl;
        return 0;
    }
    else
    {
        cout<<n<<endl;
        return 0;
    }
}
