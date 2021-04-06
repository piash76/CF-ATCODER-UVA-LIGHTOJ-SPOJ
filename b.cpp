#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,i,j,k,temp;
    cin>>n;
    long long a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(i=0;i<n-1;i++)
    {
        if((a[i]+a[i+1])%2!=0)
        {
            if(a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }

    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
