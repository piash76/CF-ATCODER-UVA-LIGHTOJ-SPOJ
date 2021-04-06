#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,t,i,j,s=0,r=0;
    cin>>n>>t;
    long long a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    j=-1;
    for(i=0;i<n;i++)
    {
        if(s+a[i]<=t)
        {
            s+=a[i];
        }
        else
        {
            s+=a[i];
            while(s>t)
            {
                j++;
                s-=a[j];
            }


        }
        r=max(r,i-j);
    }
    cout<<r<<endl;



}
