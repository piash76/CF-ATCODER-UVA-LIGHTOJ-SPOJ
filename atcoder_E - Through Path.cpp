






///PROBLEM DESCRIPTION:
///You will be given Q queries. The i-th query, consisting of integers ti, ei, and xi is as follows:

///If ti=1: for each Vertex v reachable from Vertex aei without visiting Vertex bei by traversing edges, replace cv with cv+xi

///If ti=2 for each Vertex v reachable from Vertex bei without visiting Vertex aei by traversing edges, replace cv with cv+xi



///After processing all queries, print the integer written on each vertex.

///range update with bfs


#include<bits/stdc++.h>

#define speed() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);



#define ll long long
#define pll             pair<ll,ll>
#define cy  cout<<"YES"<<endl
#define cn   cout<<"NO"<<endl
#define ff                      first
#define ss                      second

using namespace std;




const int mod = 1000000007;


const int mx =2000009;///1e6
ll vis[mx],d[mx];
vector<ll> g[mx];

ll ans[mx];


int main()
{


    speed()

    ll i,j,cas=0;

    ll n;cin>>n;

    vector<pll> edge(n+5);

    for(i=1;i<n;i++)
    {
        ll u,v;cin>>u>>v;

        edge[i].ff=u;edge[i].ss=v;

        g[u].push_back(v);g[v].push_back(u);
    }

    queue<ll> q;
    q.push(1);
    d[1]=0;

    while(!q.empty())
    {
        ll u=q.front();
        q.pop();

        for(auto v:g[u])
        {
            if(!d[v] and v!=1)
            {
                d[v]=d[u]+1;
                q.push(v);
            }
        }
    }

    //for(i=1;i<=n;i++) cout<<d[i]<<endl;
   // cout<<endl;



    ll t;cin>>t;
    while(t--)
    {


        ll typ,no,c;cin>>typ>>no>>c;
        ll x=edge[no].ff;
        ll y=edge[no].ss;

         //cout<<"X "<<x<<" Y "<<y<<endl;
        // cout<<"D X "<<d[x]<<" D Y "<<d[y]<<endl;
        if(typ==1) ///not traverse y
        {
            if(d[x]<d[y])
            {
                ans[1]+=c;
                ans[y]-=c;


            }
            else if(d[x]>d[y])
            {
                ans[x]+=c;
            }

        }
        else if(typ==2) ///not travese x
        {
            if(d[x]<d[y])
            {
               ans[y]+=c;
            }
            else if(d[x]>d[y])
            {

                 ans[1]+=c;
                ans[x]-=c;
            }

        }

      //  for(i=1;i<=n;i++) cout<<ans[i]<<endl;
    //cout<<endl;


    }



    queue<ll> q1;
    q1.push(1);
    vis[1]=1;

    while(!q1.empty())
    {
        ll u=q1.front();
        q1.pop();

        for(auto v:g[u])
        {
            if(!vis[v])
            {
                //cout<<"Ans[u] "<<ans[u]<<" ans[v] "<<ans[v]<<endl;

                ans[v]+=ans[u];
                q1.push(v);
                vis[v]=1;
            }
        }
    }

   for(i=1;i<=n;i++) cout<<ans[i]<<"\n";




    return 0;

}




