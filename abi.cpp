#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define vec(x) vector<x>
#define pb push_back
#define pii pair<ll,ll>
#define vi vector<ll>
#define vii vector<pair<ll,ll>>
#define matrix(x) vector<vector<x>>
#define all(v) v.begin(),v.end()
#define mem(a,b) memset(a, b, sizeof a)
#define ff first
#define ss second
#define mp make_pair
const int INF = 1e9;
const int MOD = 1e9 + 7;
vi maxsum;
vector<vector<long long> >adj;
ll n,k;
void bfs()
{
    queue<ll> q;
    vec(bool) vis(n+1,false);
    vec(ll) level(n+1,0);
    q.push(1);
    vis[1]=true;
    level[1]=0;
    while(!q.empty())
    {
        ll u=q.front();q.pop();
        ll f=0;
        for(ll i=0;i<adj[u].size();i++)
        {
            if(!vis[adj[u][i]])
            {  f++;
               level[adj[u][i]]=level[u]+1;
                vis[adj[u][i]]=true;
                q.push(adj[u][i]);
            }
        }
        maxsum.push_back(level[u]-f);
    }
}
void count_sum_of_happiness()
{  ll sum=0,cont=0;
sort(maxsum.begin(),maxsum.end());
    for(ll i=maxsum.size()-1;i>=0;i--)
    {
        sum=sum+maxsum[i];
        cont++;
        if(k==cont)
            break;
    }

    printf("%lld\n",sum);
}
void initialize()
{
	ll i,x,y;
    scanf("%lld",&n);
    scanf("%lld",&k);
    adj=vector<vector<long long> >(n+1);

    for(i=0;i<n-1;i++)
    {
        scanf("%lld %lld",&x,&y);
        adj[x].pb(y);
        adj[y].pb(x);
    }
}

int32_t main()
{
	//ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	ll t;
	//scanf("%lld",&t);

		initialize();
		bfs();
		count_sum_of_happiness();

}
