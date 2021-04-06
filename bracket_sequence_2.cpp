
///https://codeforces.com/contest/1469/problem/A









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
        string s;cin>>s;



        bool f=true;

        if(s.size()%2) f=false;

        if(s[0]==')' or s[s.size()-1]=='(') f=false;



        if(f) cy;
        else cn;


    ///printf("Case %lld: ",++cas);
    /// cout<<"Case "<<++cas<<": "<<s<<endl;
    }

    return 0;

}







