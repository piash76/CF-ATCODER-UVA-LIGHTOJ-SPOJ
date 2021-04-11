#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,s=0,d,b;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);

    b=a[0];
    for(i=1;i<n;i++)
    {
       if(a[i]>b)
       {
           b=a[i];
       }
    }

    for(i=0;i<n;i++)
    {
       d=b-a[i];
       s=s+d;
    }

    cout<<s<<endl;
}
