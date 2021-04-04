#include<bits/stdc++.h>
#define ll long long
#define see_you return 0
#define godspeed() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
    godspeed()
    int i,j,n,m,k,l,m1,m2,r,t,x,y,p,q,m3,mx;
    int a[5];
    cin>>t;
    while(t--)
    {
       m1=0,m2=0;
       cin>>a[0]>>a[1]>>a[2];
       sort(a,a+3,greater<int>());
       m1=a[1]+min(a[0]-a[1],a[2]);
       //cout<<m1<<endl;
       //cout<<a[2]<<endl;
       r=a[2]/2;
       //cout<<r<<endl;
       if(a[2]%2)
       {
           //cout<<"YES"<<endl;
           x=a[0]-r-1;
       }
       else x=a[0]-r;
       y=a[1]-r;
       //cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
       m2=a[2]+min(x,y);
       //cout<<m2<<endl;
        m3=(a[0]+a[1]+a[2])/2;
        //cout<<m1<<" "<<m3<<endl;
       if(a[0]>a[1]+a[2]) mx=m1;
       else mx=m3;


       cout<<max(m1,mx)<<endl;
    }
    see_you;

}
