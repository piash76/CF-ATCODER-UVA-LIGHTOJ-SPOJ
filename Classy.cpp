
///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>

#define ll long long
#define pll  pair<ll,ll>

#define ff    first
#define ss    second

#define  mp  make_pair
#define  pb  push_back




using namespace std;

const ll inf=1e18;
const int mod=1e9+7;
const int M=200005;

ll a[M];


int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll t,i,j;
    ll n;cin>>n;

    map<string,string> m;

    for(i=1;i<=n;i++)
    {
        string name,name2="",cls,c="";
        cin>>name>>cls;
        for(j=0;j<name.size()-1;j++) name2+=name[j];

        while(cls!="class")
        {
            if(cls=="upper") c+='3';
            else if(cls=="middle") c+='2';
            else if(cls=="lower") c+='1';

            cin>>cls;
        }

        reverse(c.begin(),c.end());

        m[name2]=c;

    }

    ll mx=-1;
    for(auto x:m)
    {
        //cout<<x.ff<<" "<<x.ss<<endl;
        mx=max(mx,(ll)x.ss.size());
    }

    multimap<string,string,greater<string>>m2;

    for(auto x:m)
    {
        string nm=x.ff;
        string st=x.ss;

        st=st+string(mx-st.size(),'2');

        m2.insert({st,nm});

    }


    for(auto x:m2)
    {
        cout<<x.ss<<endl;
    }


    return 0;

}

/*

5
mom: upper upper lower middle class
dad: middle middle lower middle class
queenelizabeth: upper upper class
chair: lower lower class
unclebob: middle lower middle class



*/





