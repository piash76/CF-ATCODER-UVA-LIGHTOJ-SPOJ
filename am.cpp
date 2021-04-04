#include<bits/stdc++.h>
#define int long long
using namespace std;
string s;
int adj[109][109];
const int inf=1e18;
int p[1000009];
bool v[1000009];
int d[109][109];
main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>s;
        for(int j=0;j<n;j++)
        {
            if(s[j]=='1')
            {
                adj[i][j+1]=1;
                d[i][j+1]=1;
            }
            else if(s[j]=='0')
            {
                adj[i][j+1]=0;
                d[i][j+1]=inf;
            }
        }
    }
    for(int i=1;i<=n;i++)d[i][i]=0;
    for(int k=1;k<=n;k++)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(d[i][k]+d[k][j]<d[i][j])
                {
                    d[i][j]=d[i][k]+d[k][j];
                }
            }
        }
    }
    vector<int>ans;
    int m;
    cin>>m;
    for(int i=1;i<=m;i++)scanf("%lld",&p[i]);
    ans.push_back(p[1]);
    int last=1,nxt;
    for(int i=2;i<m;i++)
    {
        nxt=i+1;
        int cost=nxt-last;
        if(d[p[last]][p[nxt]]==cost)
        {
            v[i]=true;
        }
        else
        {
            last=i;
        }

    }
    for(int i=2;i<m;i++)
    {
        if(v[i]==false)
        {
            ans.push_back(p[i]);
        }
    }
    ans.push_back(p[m]);
    int sz=ans.size();
    cout<<sz<<endl;
    for(int i=0;i<sz;i++)
    {
        printf("%lld ",ans[i]);
    }
    return 0;
}
