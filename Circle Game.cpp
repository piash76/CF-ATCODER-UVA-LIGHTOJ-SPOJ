






#include<bits/stdc++.h>





#define ll long long


using namespace std;




const int mod = 1000000007;
const int maxn = 311111;
ll a[maxn],b[maxn];


int main()
{


    ll t,i,j;
    scanf("%lld",&t);
    while(t--)
    {
        ll d,k;scanf("%lld %lld",&d,&k);

        ll x=0,y=0,turn=0;

        while(1)
        {
            if(x<=y and (x+k)*(x+k)+y*y<=d*d) { x+=k;turn++; }
            else if(x>y and (x*x)+(y+k)*(y+k)<=d*d) { y+=k;turn++; }
            else break;
        }

        if(turn%2) printf("Ashish\n");
        else printf("Utkarsh\n");

    }

}

