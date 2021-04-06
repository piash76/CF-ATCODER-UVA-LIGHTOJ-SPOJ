#include<bits/stdc++.h>
#define ll long long
#define bye return 0;
#define godspeed() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mx 100000
using namespace std;

int main()
{
    godspeed()
    ll i,j,k,l,n,t,b,c=0,r=0;
    string s;
    cin>>s;
    if(s.size()==1)
    {
        cout<<0<<endl;
        bye;
    }
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='1') c++;
    }
    if(c==1 && s.size()%2)
    {
        cout<<s.size()/2<<endl;
        bye;
    }
    if(s.size()%2==0)
    {
        cout<<s.size()/2<<endl;
        bye;
    }
    if(c>1 && s.size()%2)
    {
        cout<<(s.size()/2)+1<<endl;
        bye;
    }



}
