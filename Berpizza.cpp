




///PROBLEM DESCRIPTION:


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


const int mx =500009;
ll vis[mx];


struct cmp
{
    bool operator()(pll &x,pll &y)
    {
        //return x<y;
        if(x.ff!=y.ff) return x<y;
        else if(x.ff==y.ff)
        {
            return x>y;
        }
    }
};


int main()
{


    ll t,i,j,cas=0;

    ll q;scanf("%lld",&q);

    queue<pair<ll,ll> > p1;
    priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,cmp> p2; ///money,num

    ll num=1;

    vector<ll> ans;

    while(q--)
    {
        ll x;scanf("%lld",&x);
        if(x==1)
        {
            ll m;scanf("%lld",&m);
            p1.push({m,num});
            p2.push({m,num});
            num++;
        }
        else if(x==2)   ///mono
        {
            while(!p1.empty() and vis[p1.front().ss])
            {
                p1.pop();
            }
            ll x=p1.front().ss;
            vis[x]=1;
           ans.push_back(x);
            p1.pop();

        }
        else if(x==3)
        {
            while(!p2.empty() and vis[p2.top().ss])
            {
                p2.pop();
            }
            ll x=p2.top().ss;

            //cout<<"X "<<x<<endl;

            vis[x]=1;
            ans.push_back(x);

            p2.pop();
        }

    }

    for(auto x:ans) printf("%lld ",x);



    return 0;

}





