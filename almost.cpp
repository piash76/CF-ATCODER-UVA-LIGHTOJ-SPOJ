#include<bits/stdc++.h>
#define ll long long
#define n 10000
using namespace std;

bool isprime[n];
ll prime[n],j;

void sieve()
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
    sieve();
    int i,j,a[10000]={0},t,c=0;
    cin>>t;
    for(i=2;i<=t;i++)
    {

        for(j=2;j<i;j++)
        {
           if(i%j==0 && isprime[j]==0)
           {
               a[i]++;
           }
        }

        if(a[i]==2)
        {
            c++;
        }
    }
    cout<<c<<endl;
}
