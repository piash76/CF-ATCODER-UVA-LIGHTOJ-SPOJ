#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,l,i;
    double d=0,x,y,z,ans;
    cin>>n>>l;
    long long int a[n];
    for(i=0;i<n;i++)
    {
       cin>>a[i];
    }
    sort(a,a+n);

    for(i=0;i<(n-1);i++)
    {
        if(a[i+1]-a[i]>d)
        {
            d=a[i+1]-a[i];
        }
    }
    d=d/2;
    x=a[0]-0;
    y=l-a[n-1];
    z=max(x,y);
    ans=max(z,d);

    cout<<showpoint;
    cout<<fixed;
    cout<<setprecision(10);

    cout<<ans<<endl;

}
