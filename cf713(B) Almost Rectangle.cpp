

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

ll a[M];


int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);



    ll t,i,j;
    cin>>t;
    while(t--)
    {
        ll n,i,j,sum=0;
        vector<pll>v;
        cin>>n;
        char c[500],a[500][500];
        string s;

        for(i=0;i<n;i++)
        {
            s.clear();
            cin>>s;
            for(j=0;j<n;j++)
            {
                a[i][j]=s[j];
            }
        }

    for(i=0;i<n;i++)
        {

            for(j=0;j<n;j++)
            {
                if(a[i][j]=='*')
                {
                    v.pb({i,j});

                }
            }

        }

        if(v[0].ss==v[1].ss)
        {
            if(v[1].ss+1!=n)
            {
                v.pb({v[0].ff,v[0].ss+1});
                v.pb({v[1].ff,v[1].ss+1});
            }
            else
            {

                v.pb({v[0].ff,v[0].ss-1});
                v.pb({v[1].ff,v[1].ss-1});
            }

        }

    else if(v[0].ff==v[1].ff)
        {
            if(v[1].ff+1!=n)
            {
                v.pb({v[0].ff+1,v[0].ss});
                v.pb({v[1].ff+1,v[1].ss});
            }
            else
            {

                v.pb({v[0].ff-1,v[0].ss});
                v.pb({v[1].ff-1,v[1].ss});
            }

        }
    else
    {
                v.pb({v[0].ff, v[1].ss});
                v.pb({v[1].ff, v[0].ss});

    }

/*
cout<<v[0].ff<<" "<<v[0].ss<<endl;
cout<<v[1].ff<<" "<<v[1].ss<<endl;
cout<<v[2].ff<<" "<<v[2].ss<<endl;

cout<<v[3].ff<<" "<<v[3].ss<<endl;

*/


    for(i=0;i<n;i++)
        {

            for(j=0;j<n;j++)
            {

                    if(i==v[3].ff && j==v[3].ss)
                    {
                        cout<<"*";

                    }
                    else if((i==v[2].ff && j==v[2].ss))
                    {
                        cout<<"*";
                    }
                    else cout<<a[i][j];



            }
            cout<<endl;
        }





    }

    return 0;

}
