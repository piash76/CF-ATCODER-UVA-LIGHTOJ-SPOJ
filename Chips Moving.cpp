#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j=0,r,s,x,y,b=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2==0) j++;
        else b++;
    }
    sort(a,a+n);
    cout<<min(j,b)<<endl;

}
