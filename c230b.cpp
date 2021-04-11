#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,a,x,cnt=0,r,i;
    cin>>n;
    while(n--)
    {
        cin>>a;
        for(i=1;i<=a;i++)
        {
            r=a%i;
            if(r==0)
            {
                cnt++;
            }

        }
        if(cnt==3)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        cnt=0;
    }
}
