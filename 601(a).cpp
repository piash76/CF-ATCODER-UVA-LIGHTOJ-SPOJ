#include<bits/stdc++.h>
#define ll long long
#define see_you return 0
#define godspeed() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
    godspeed()
    ll n,i,j,t,c,a,b;
    cin>>t;
    while(t--)
    {
        c=0;
        cin>>a>>b;
        if(a==b)
        {
            cout<<0<<endl;
        }
        else
        {
            ll x=abs(a-b);

                ll r=x/5;
                c+=r;
                ll p=x%5;
                if(p==1 || p==2)
                {
                    c+=1;
                }
                else if(p==3 || p==4)
                {
                    c+=2;
                }


            cout<<c<<endl;
        }

    }

  see_you;


}
