#include<bits/stdc++.h>
using namespace std;

int lbs(int a[],int x,int n)
{

    int ans,l=0,h=n-1;
    while(l<=h)
    {
        int m=(l+h)/2;
        if(a[m]==x)
        {
            ans=m;
            l=m+1;
        }
        else if(a[m]>x)
        {
            h=m-1;
        }
        else
        {
            l=m+1;
        }

    }
    return ans;
}

int main()
{
    int n,i,x;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    cin>>x;
    int r=lbs(a,x,n);
    cout<<r<<endl;

}
