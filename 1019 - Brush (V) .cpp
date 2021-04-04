#include<bits/stdc++.h>
#define ll long long
#define inf 1e18
using namespace std;
vector<ll> g[100005];
map< pair<ll,ll>,ll> cost;
ll dis[100005];

ll dijkstra(ll n)
{
    priority_queue<ll> q;
    q.push(1);
    dis[1]=0;
    while(!q.empty())
    {
        ll u=q.top();
        q.pop();
        if(u==n)
        {
            return dis[n];
        }
        for(ll i=0;i<g[u].size();i++)
        {
            ll v=g[u][i];
            ll cst=cost[{u,v}];
            if(dis[u]+cst<dis[v])
            {
                dis[v]=dis[u]+cst;

                q.push(v);
            }
        }
    }
    return -1;
}


int main()
{
    ll i,j,k,t,n,m,a,b,c,cas=0,x;
    scanf("%lld",&t);
    while(t--)
    {
       scanf("%lld %lld",&n,&m);
      for(int i=2; i<=n ; i++)
      {
        g[i].clear() ;

        dis[i] = inf ;
      }
       while(m--)
       {
           scanf("%lld %lld %lld",&a,&b,&c);
           g[a].push_back(b);
           g[b].push_back(a);
           cost[{a,b}]=c;
           cost[{b,a}]=c;

       }
       x=dijkstra(n);
       printf("Case %lld: ",++cas);
       if(x==-1)
       {
          cout<<"Impossible"<<endl;
       }

       else cout<<x<<endl;

    }

}
