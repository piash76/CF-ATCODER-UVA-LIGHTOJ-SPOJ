#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,c,s,i;
    cin>>n>>c;
    s=1;
    long long a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n-1;i++)
    {
        if(a[i+1]-a[i]>c)
        {
            s=1;
        }
        else
        {
            s++;
        }
    }
    cout<<s<<endl;
}
