#include<bits/stdc++.h>
#define ll long long
#define godspeed() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define sc1(a) scanf("%d",&a)
#define sc2(a,b) scanf("%d %d",&a,&b)
#define cy  cout<<"YES"<<endl
#define cn   cout<<"NO"<<endl
#define f1(i,a,b)  for(int i=a;i<b;i++)
#define f2(i,a,b) 	for(int i=a;i<=b;i++)

#define min3(a,b,c)             min(a,min(b,c))
#define min4(a,b,c,d)           min(a,min(b,min(c,d)))
#define max3(a,b,c)             max(a,max(b,c))
#define max4(a,b,c,d)           max(a,max(b,max(c,d)))
#define max5(a,b,c,d,e)         max(max3(a,b,c),max(d,e))
#define min5(a,b,c,d,e)         min(min3(a,b,c),min(d,e))
#define mem(a,x)                memset(a,x,sizeof(a))
#define see_you                     return 0
#define SORT(v)                 sort(v.begin(),v.end())
#define REV(v)                  reverse(v.begin(),v.end())
#define print_case cout<<"Case "<<++caseno<<": ";
using namespace std;

int main()
{
    godspeed()
    ll i,j,n,m,k,l,t,x,y,r,s,d,f;
    cin>>t;
    while(t--)
    {
        f=0;
        cin>>n>>d;
        f2(i,1,n)
        {
            if(ceil((long double)d/i)+i-1<=n)
            {
                f=1;
                break;
            }

        }
        if(f) cy;
        else cn;
    }

see_you;
}
