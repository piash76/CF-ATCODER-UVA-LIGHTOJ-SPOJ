






///PROBLEM DESCRIPTION:


#include<bits/stdc++.h>

#define speed() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);



#define ll long long


using namespace std;




const int mod = 1000000007;


const int maxn = 311111;



int main()
{


    speed()

    ll t,i,j;
    ll n;cin>>n;
    //vector<pair<ll,ll>> v;
    pair<ll,ll> v[n+10];
    for(i=0;i<n;i++)
    {
        ll x;cin>>x;
        v[i]={x,i+1};
    }

    string s;cin>>s;

    sort(v,v+n);


    ll idx=0;

    stack<ll> st;
   ll ans[2*n+10];

    for(i=0;i<2*n;i++)
    {
        ll x=s[i]-'0';
        if(x==0)
        {
            ll no=v[idx].second;

           // cout<<"NO "<<no<<endl;


            st.push(no);
            ans[i]=no;


            idx++;


        }
        else
        {
            ll no_for_ex=st.top();
            st.pop();

            ans[i]=no_for_ex;

        }
    }


    for(i=0;i<2*n;i++) cout<<ans[i]<<" ";
    cout<<endl;

    //sort(v.begin(),v.end());




}

