#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long s,n,i,j,k,l,temp,r,m;
    cin>>l>>k;
    cin>>n;
    long long a[l+1];

    if(l==1)
    {
        cout<<"0"<<endl;
        return 0;
    }
    j=l;
    temp=n;
    while(temp!=0)
    {
        r=temp%10;
        a[j-1]=r;
        j--;
        temp=temp/10;
    }

    if(a[0]>1)
    {
        a[0]=1;
        k--;
    }
    if(a[0]==1)
    {
        a[0]=1;
    }
    m=1;
    for(i=1;i<=k;i++)
    {
        a[m]=0;
        m++;
    }

    for(i=0;i<l;i++)
    {
        cout<<a[i];
    }

}
