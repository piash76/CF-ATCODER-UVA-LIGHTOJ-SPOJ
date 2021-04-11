

///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>

#define ll long long
#define pll  pair<ll,ll>

#define ff    first
#define ss    second

#define  mp  make_pair
#define  pb  push_back

#define cy  cout<<"YES"<<endl
#define cn   cout<<"NO"<<endl


using namespace std;

const ll inf=1e18;
const int mod=1e9+7;
const int mod2=2147483647; ///2^31-1
const int M=500005;

ll a[M],vis[M];
vector<pll> v;
vector<ll> pt[M];

int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);



    ll t,i,j;

    ll n;cin>>n;
    ll mx=-1;

    for(i=0;i<n;i++)
    {
        ll l,r;cin>>l>>r;
        mx=max(mx,l);
        mx=max(mx,r);
        v.push_back({l,r});
    }

    sort(v.begin(),v.end());


    ll p;cin>>p;
    for(i=1;i<=p;i++)
    {
        ll x;cin>>x;

        for(j=0;j<n;j++)
        {
            if(x>=v[j].ff and x<=v[j].ss)
            {
                vis[j]++;
                pt[j].push_back(x); ///points in range
            }
        }
    }


     bool f=true;
    vector<ll>ans;

    for(i=0;i<n;i++)
    {
        //cout<<"V[i].ff "<<v[i].ff<<" V[i].ss "<<v[i].ss<<endl;


        if(vis[i]==0)
        {
            //cout<<"VIS 0 "<<" V[i].ff "<<v[i].ff<<" V[i].ss "<<v[i].ss<<endl;

            ans.push_back(v[i].ff);
            vis[i]++;
            pt[i].push_back(v[i].ff);



            if(i!=n-1) ///if not last range
            {
                if(v[i].ss==v[i+1].ff) ///if attached
                {
                ///checking next range
                if(vis[i+1]==0 or vis[i+1]==1)
                {
                    vis[i]++;
                    vis[i+1]++;   ///greedy
                    ans.push_back(v[i].ss);
                    pt[i].push_back(v[i].ss);
                    pt[i+1].push_back(v[i].ss);

                }
                else
                {
                    vis[i]++;

                    ans.push_back(v[i].ss-1);
                    pt[i].push_back(v[i].ss-1);
                }

                }
                else   ///not attached
                {
                    vis[i]++;
                    ans.push_back(v[i].ss);
                    pt[i].push_back(v[i].ss);

                }

            }
            else   ///if last range
            {
                vis[i]++;
                ans.push_back(v[i].ss);
                pt[i].push_back(v[i].ss);
            }
        }
        else if(vis[i]==1)
        {

            if(i!=n-1) ///if not last range
            {
                if(v[i].ss==v[i+1].ff) ///if attached
                {
                    //cout<<"AHSCHI 0 "<<endl;

                    ll rt=v[i].ss;

                    ll point=pt[i].back();

                    //cout<<"AHSCHI 1 "<<endl;

                    if(point!=rt)
                    {

                        //cout<<"AHSCHI 2 "<<endl;

                        if(vis[i+1]<=1)
                        {
                           // cout<<"I+1 "<<i+1<<endl;
                            //cout<<"HERE "<<vis[i+1]<<endl;
                            vis[i]++;
                            vis[i+1]++;
                            ans.push_back(v[i].ss);

                            pt[i].push_back(v[i].ss);

                            pt[i+1].push_back(v[i].ss);

                        }
                        else ///if(vis[i+1]>1)///else
                        {
                            if(point+1==rt)
                            {
                                vis[i]++;
                                ans.push_back(point-1);
                                pt[i].push_back(point-1);

                            }
                            else
                            {
                                vis[i]++;
                                ans.push_back(point+1);
                                pt[i].push_back(point+1);
                            }
                        }

                    }
                    else ///if(point==rt)
                    {
                        vis[i]++;
                        ans.push_back(rt-1);
                        pt[i].push_back(rt-1);
                    }


                }
                else ///if(v[i].ss!=v[i+1].ff)  ///not attached
                {
                    vis[i]++;
                    ll point=pt[i].back();

                    if(point!=v[i].ss)
                    {
                        ans.push_back(point+1);
                        pt[i].push_back(point+1);
                    }
                    else
                    {
                        ans.push_back(point-1);
                        pt[i].push_back(point-1);
                    }

                }

            }
            else   ///if last range
            {
                vis[i]++;
                ll point=pt[i].back();
                if(point!=mx)
                {
                    ans.push_back(point+1);

                    pt[i].push_back(point+1);
                }
                else
                {
                    ans.push_back(point-1);

                    pt[i].push_back(point-1);
                }
            }

        }
        else if(vis[i]==2)
        {
            if(i!=n-1 and v[i].ss==v[i+1].ff)
            {
                v[i+1].ff++;
            }
        }
        else
        {
            f=false;break;
        }

    }


    for(i=0;i<n;i++)
    {
        //cout<<"vis[i] "<<vis[i]<<endl;

        if(vis[i]!=2) {f=false;break;}
    }

    if(f)
    {
        cout<<ans.size()<<endl;
        for(auto x:ans) cout<<x<<" ";
        cout<<endl;

    }
    else
    {
        cout<<"impossible"<<endl;
    }


    return 0;

}



