#include<bits/stdc++.h>
#define ll long long
#define bye return 0
using namespace std;

int main()
{
    int n,i,j,k,sum,q;
    string s,t;

    cin>>q;
    while(q--)
    {
        vector<int> v;
        sum=0;
        cin>>n;
        cin>>s;
        cin>>t;
        for(i=0;i<n;i++)
        {
            if(s[i]!=t[i])
            {
                v.push_back(i);
            }
        }
        if(v.size()!=2)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            if(s[v[0]]==s[v[1]] && t[v[0]]==t[v[1]]) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;

        }
    }
    bye;
}
