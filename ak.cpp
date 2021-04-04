#include<bits/stdc++.h>
#define int long long
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int h[109];
        int n,m,k,flag=0;
        cin>>n>>m>>k;
        for(int i=1;i<=n;i++)
        {
            scanf("%lld",&h[i]);
        }
        for(int i=1;i<n;i++)
        {
            if(h[i]==h[i+1])
            {
                m+=min(h[i],k);
            }
            else if(h[i]<h[i+1])
            {
                int lvl=h[i+1]-k;
                lvl=max(lvl,0LL);
                if(h[i]<lvl)
                {
                    m-=(lvl-h[i]);
                    if(m<0)flag=1;
                }
                else
                {
                    m+=(h[i]-lvl);
                }
            }
            else if(h[i]>h[i+1])
            {
                m+=h[i]-h[i+1];
                m+=min(h[i+1],k);
            }
        }
        if(flag==1)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }

    }
    return 0;
}
