#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

    string s;
    cin>>s;
    int i,j,k,l,c=0;
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='4') c=(c*2)+1;
        else  c=(c*2)+2;
    }

    cout<<c<<endl;
    return 0;

}
