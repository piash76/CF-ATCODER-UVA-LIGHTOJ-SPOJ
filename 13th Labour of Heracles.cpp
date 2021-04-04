





///PROBLEM DESCRIPTION:


#include<bits/stdc++.h>

#define speed() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);



#define ll long long
#define cy  cout<<"YES"<<endl
#define cn   cout<<"NO"<<endl
#define ff                      first
#define ss                      second

using namespace std;




const int mod = 1000000007;


const int mx =1000009;///1e6
ll w[mx],in[mx];


int main()
{


    speed()

    ll t,i,j,cas=0;
    cin>>t;
    while(t--)
    {
        ll n;cin>>n;
        ll sm=0;

        for(i=1;i<=n;i++) {in[i]=0; cin>>w[i];sm+=w[i]; }



        for(i=1;i<n;i++)
        {
            ll u,v;cin>>u>>v;
            in[u]++;
            in[v]++;
        }

        for(i=1;i<=n;i++)
        {
            if(in[i]) in[i]--;
        }

        vector<ll> ans;
        ans.push_back(sm);


        priority_queue<pair<ll,ll> > q;

        for(i=1;i<=n;i++)
        {
           // cout<<"IN "<<in[i]<<" w[i] "<<w[i]<<endl;

            if(in[i]) q.push({w[i],in[i]});
        }

       // priority_queue<pair<ll,ll> > p=q;


       // while(!p.empty())
        //{
            //cout<<"ELE "<<p.top().ff<<" "<<p.top().ss<<endl;
            //p.pop();
       // }


        for(i=1;i<=n-2;i++)
        {
            ll x=q.top().ff;
            ll y=q.top().ss;

            q.pop();

            sm+=x;
            y--;

            ans.push_back(sm);

            if(y) q.push({x,y});

        }

        for(auto x:ans) cout<<x<<" ";
        cout<<endl;







    }

    return 0;

}




