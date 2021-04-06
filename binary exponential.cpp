#include<bits/stdc++.h>
#define ll long long
#define mod 1e9+7
using namespace std;

long long binpow(long long base,long long power)
{
        long long result=1;
        while (power>0)
        {
                if (power%2==1)
                        result = (result*base);
                base = (base*base);
                power/=2;
        }
        return result;
}

long long  binmod(long long base,long long power,long long M)
{
        long long result=1;
        while (power>0)
        {
                if (power%2==1)
                        result = (result*base)%M;
                base = (base*base)%M;
                power/=2;
        }
        return result;
}
int main()
{
    int x,n;
    cin>>x>>n;
    cout<<binpow(x,n);
    cout<<binmod(x,n,mod);
}
