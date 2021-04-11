#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    string a;
    int n,z=0,o=0,i;
    cin>>n;
    cin>>a;
    for(i=0;i<n;i++)
    {
        if(a[i]=='0')
        {
            z++;
        }
        if(a[i]=='1')
        {
            o++;
        }
    }
    if(o>z)
    {
        cout<<(n-2*z)<<endl;
    }
    else
    {
        cout<<(n-2*o)<<endl;
    }
    return 0;
}
