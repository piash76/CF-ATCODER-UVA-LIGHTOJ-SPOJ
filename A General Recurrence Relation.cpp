#include<bits/stdc++.h>
using namespace std;

long long a,b,x,y,s,n;

long long rec(long long n)
{
    if(n==0)return x;
    else if(n==1) return y;
    else return a*rec(n-1)+b*rec(n-2);
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>a>>b>>n;
        s=rec(n);
    }

}
