#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll i,j,x,y,w,c,cnt,ans,cs=1,n,tn,src,ttl;
    vector<ll> gp[100005];
    ll vis[100005],level[100005];
    map<ll,ll> m;
    while(cin>>n)
    {
        if(n==0) return 0;
        memset(gp,0,sizeof(gp));
        m.clear();
        tn=0;
        for(i=0;i<n;i++)
        {
            scanf("%lld %lld",&x,&y);
            gp[x].push_back(y);
            gp[y].push_back(x);
            if(m[x]!=1)
            {
                m[x]=1;
                tn++;
            }
            if(m[y]!=1)
            {
                m[y]=1;
                tn++;
            }

        }

        while(cin>>src>>ttl)
        {
            c=0;
            if(src==0 && ttl==0) break;
            memset(vis,0,sizeof(vis));
            memset(level,0,sizeof(level));
            queue<ll> q;
            q.push(src);
            while(!q.empty())
            {
                ll u=q.front();
                q.pop();
                for(j=0;j<gp[u].size();j++)
                {
                    ll v=gp[u][j];
                    if(!vis[v])
                    {
                        vis[v]=1;
                        level[v]=level[u]+1;
                        if(level[v]>ttl)
                            {
                                break;
                            }
                            c++;
                        q.push(v);
                    }
                }
            }

        cout<<"Case "<<cs<<": "<<tn-c-1<<" "<<"nodes not reachable from node "<<src<<" with TTL = "<<ttl<<"."<<endl;
        cs++;

        }
    }


}

