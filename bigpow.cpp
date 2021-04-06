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

ll mulmod(ll a, ll b, ll m)
{
    if(b == 0)
        return 0;
    if(b == 1)
        return a%m;

    ll x = mulmod(a, b/2, m), y = 0;
    if(b%2 == 1)
        y = a%m;
    return ((x+x)%m + y)%m;
}

long long bigmod(long long a, long long b, long long m)
{
    if(b == 0)
        return 1;
    if(b == 1)
        return a%m;

    long long x = bigmod(a, b/2, m), y = 1;
    if(b%2 == 1)
        y = a%m;

    return (mulmod(x, x, m) * y)%m;
}

int main()
{
    int x,n;
    cin>>x>>n;
    cout<<binpow(x,n);
    cout<<binmod(x,n,mod);
}

