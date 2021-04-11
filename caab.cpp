#include<bits/stdc++.h>
#define ll long long

using namespace std;

bool isprime[1000000];
ll prime[1000000],j,n;

int sieve()
{

    ll sq=sqrt(n);
    isprime[2]=0; //as 0 indicates prime
    for(ll i=4;i<=n;i+=2) isprime[i]=1;
    for(ll i=3;i<=sq;i+=2)
    {
        if(isprime[i]==0)
        {
            for(ll j=i*i;j<=n;j+=i)isprime[j]=1;
        }
    }
}
int main()
{
    ll a,b,c,i,j,k,n,t,q,r,x;
    cin>>t;
    while(t--)
    {

    cin>>x;
    n=sqrt(x);
    if(n*n!=x)
    {
       cout<<"NO"<<endl;
    }

    else if(isprime[n]==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    //cout<<isprime[n]<<endl;

    }
    return 0;
}

