#include<bits/stdc++.h>
#define ll long long

using namespace std;


bool isprime[1000000];
ll prime[1000000],j;

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

int main()
{
    int a,b,c,i,j,k,n,t,q,x;
    cin>>n;
    while(n--)
    {
        c=0;
        cin>>x;
        for(i=1;i<=n;i++)
        {
            if(x%i==0)
            {
                cout<<i<<endl;
                c++;
            }
        }
        cout<<c<<endl;
        if(c==3)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
