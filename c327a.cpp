#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,k,c=-1,l,c1=0,c0=0,a,ans;
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a;
        if(a==1)
        {
            c1++;
            if(c0>0)
            {
                c0--;
            }
        }
        if(a==0)
        {
            c0++;
            if(c0>c)
            {
                c=c0;
            }
        }
    }

    ans=c1+c;
    cout<<ans<<endl;


}
