#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long i,j,a,b,c,r,s,f,p,q,g,l;
    cin>>a>>b>>c;
    r=2*(a+b);
    s=a+b+c;
    p=2*(a+c);
    q=2*(b+c);
    f=min(r,s);
    g=min(f,p);
    l=min(g,q);
    cout<<l<<endl;
}
