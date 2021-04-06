

#include<bits/stdc++.h>

using namespace std;



#define N 10000005
#define ll long long

int p[10000005];

bool isprime[N+5];
int prime[N+5];

int tot;


void sieve()
{

    int sq=sqrt(N);
    isprime[2]=0; //as 0 indicates prime
    for(int i=4;i<=N;i+=2) isprime[i]=1; ///o(n)
    for(int i=3;i<=sq;i+=2)
    {
        if(isprime[i]==0)
        {
            for(int j=i*i;j<=N;j+=i)isprime[j]=1;  ///O(nlog(log(n)));
        }
    }

   // int j=0;
    for(int i=2;i<=N;i++)
    {
        if(isprime[i]==0)
        {
            prime[tot]=i;
            tot++;
        }
    }



}

void prime_factor(int n)
{
	 int x = sqrt(n);

	for(int i = 0; prime[i] <= x; ++i)
    {
		if(n%prime[i] == 0) {
			p[prime[i]]++;
			while(n%prime[i] == 0) n /= prime[i];
		}
	}
	if(n > 1) p[n]++;
}





int main()
{


    sieve();
    int i,j,t,cas=0;
    int n;scanf("%d",&n);


    for(i=0;i<n;i++)
    {
        int x;scanf("%d",&x);
       prime_factor(x);
    }

    for(i=2;i<=10000000;i++)
    {
       p[i]+=p[i-1];
    }

    int q;
    scanf("%d",&q);
    while(q--)
    {
        int l,r;
        scanf("%d %d",&l,&r);
        l=min(l,10000000);
        r=min(r,10000000);
        int ans=p[r]-p[l-1];
        printf("%d\n",ans);
    }




}
