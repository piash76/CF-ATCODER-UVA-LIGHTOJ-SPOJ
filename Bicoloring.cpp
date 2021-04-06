#include<bits/stdc++.h>

using namespace std;

vector<int> gp[500];
int color[500],vis[500];

bool isbipartile(int src)
{
    queue<int> q;
    memset(color,-1,sizeof(color));
    memset(vis,0,sizeof(vis));
    q.push(src);
    vis[src]=1;
    color[src]=1;
    while(!q.empty())
    {
       int u=q.front();
       q.pop();
       int c=color[u]==1?2:1;
       for(int i=0;i<gp[u].size();i++)
       {
           int x=gp[u][i];
           if(color[u]==color[x])
           {
               return 0;
           }
           if(vis[x]==0)
           {
           color[x]=c;
           vis[x]=1;
           q.push(x);
           }

       }
    }
    return 1;
}

int main()
{
    int i,j,n,e,s,a,b;
    while(1)
    {
        scanf("%d",&n);
        if(n==0) break;
        scanf("%d",&e);
        for(i=0;i<e;i++)
        {
            scanf("%d %d",&a,&b);
            gp[a].push_back(b);
            gp[b].push_back(a);
        }

        if(isbipartile(0)) cout<<"BICOLORABLE."<<endl;
        else  cout<<"NOT BICOLORABLE."<<endl;
        for (i=0;i<n;i++) gp[i].clear();
    }
    return 0;
}

