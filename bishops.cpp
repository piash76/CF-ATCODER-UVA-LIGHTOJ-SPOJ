#include<bits/stdc++.h>
#define godspeed() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;

int main()
{
    godspeed()
    int t,i,x,y,a,b,c,d;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a>>b>>c>>d;
        printf("Case %d: ",i);
        x=abs(a-c);
        y=abs(b-d);
        if(x==y)
        {
            printf("1\n");
        }
        else if(x%2==y%2)
        {
            printf("2\n");
        }
        else
        {
            printf("impossible\n");
        }
    }
    return 0;
}
