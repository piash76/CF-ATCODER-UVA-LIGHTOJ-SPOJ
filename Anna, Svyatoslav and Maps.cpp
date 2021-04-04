#include<bits/stdc++.h>
#define ll long long
#define return 0 bye
#define godspeed() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define inf 1e9
using namespace std;

int d[[110][110],p[1000001];
int main()
{
    godspeed()
    int n,i,j,k,x;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cin>>x;
            if(x==0)
            {
                d[i][j]=inf;
            }
            else
            {
                d[i][j]=x;
            }
        }
    }
    for(int i=1;i<=n;i++)d[i][i]=0;
    for(k=1;k<=n;k++)
    {
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
            }
        }
    }
    int m
    cin>>m;
    for(i=1;i<=m;i++) cin>>p[i];
    vector<int> v;
    v.push_back(p[1]);










}
