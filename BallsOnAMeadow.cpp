#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    string s;
    cin>>s;
    int c1=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='(' && (s[i+1]==')' || s[i+1]=='|'))
        {
            c1++;
        }
        else if(s[i]==')' && s[i-1]=='|')
        {
            c1++;
        }
    }
    cout<<c1<<endl;
}
