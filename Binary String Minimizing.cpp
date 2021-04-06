




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
ll a[mx];


int main()
{


    speed()

    ll t,i,j,cas=0;
    cin>>t;
    while(t--)
    {
        ll n,k;cin>>n>>k;
        string s;cin>>s;

        string ans(n,'2');

        vector<ll>v;

        for(i=0;i<n;i++) if(s[i]=='0') v.push_back(i);

        ll idx=0;

        for(i=0;i<v.size();i++)
        {
            ll cst1=v[i]-(idx);
           //cout<<"CST "<<cst1<<endl;


            if(k-cst1>=0)
            {
               // cout<<"IDX1 "<<idx<<endl;

                ans[idx]='0';
                idx++;

                k-=cst1;
            }
            else if(k-cst1<0 and k>0)
            {
                idx=idx+abs(k-cst1);

                //cout<<"IDX2 "<<idx<<endl;

                ans[idx]='0';

                k=0;
            }
            else break;
        }

        for(j=i;j<v.size();j++) ans[v[j]]='0';


        for(i=0;i<n;i++) if(ans[i]=='2') ans[i]='1';

        cout<<ans<<endl;




    }

    return 0;

}





