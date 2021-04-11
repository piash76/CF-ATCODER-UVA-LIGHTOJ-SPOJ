#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,x,i,j,k,cnt=0,m=1;
    cin>>n>>x;
    long long a[n][n];

    for(i=0;i<n;i++)
    {
        k=m;
        for(j=0;j<n;j++)
        {
            a[i][j]=k;
            k=k+m;
        }
        m++;
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]==x)
            {
                cnt++;
            }
        }
    }

    cout<<cnt<<endl;
}
