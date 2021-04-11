#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,r,s,d;
    cin>>a>>b;
    r=min(a,b);
    d=abs(a-b);
    s=d/2;
    cout<<r<<" "<<s<<endl;
}
