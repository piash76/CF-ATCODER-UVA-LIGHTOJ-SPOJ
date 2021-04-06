#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n,m,x,y,i,j,k,e,f;
    cin>>n>>m>>x>>y>>k;
    int a[n],b[n],c[m],d[m];
    if(k>=n || k>=m)
    {
        cout<<"-1"<<endl;
        return 0;
    }

    for(i=0;i<n;i++)
    {
        cin>>a[i];
        e=a[i]+x;
        b[i]=e;
    }

     for(i=0;i<m;i++)
    {
        cin>>c[i];
        f=c[i]+y;
        d[i]=f;
    }

     if(k>=n || k>=m)
    {
        cout<<"-1"<<endl;
        return 0;
    }


    cout<<d[m-1];
    return 0;
}
