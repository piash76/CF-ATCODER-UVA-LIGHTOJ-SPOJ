#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n,i,j,r,h,l,hc=0,lc=0;
    cin>>n;
    long long a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    l=a[0];
    h=a[n-1];
    for(i=0;i<n;i++)
    {
        if(a[i]==l)
        {
           lc++;
        }
        if(a[i]==h)
        {
            hc++;
        }
    }
    if(l==h)
    {

       cout<<"0"<<" "<<(lc*(lc-1))/2<<endl;
       return 0;
    }

    cout<<h-l<<" "<<hc*lc<<endl;
}
