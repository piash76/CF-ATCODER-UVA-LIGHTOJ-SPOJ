#include<bits/stdc++.h>
using namespace std;

int ans[200001],check[200001],a[200001];
int dfs(int N,int c)
{
    if(check[N]) return c;
    check[N]=1;
    return ans[N]=dfs(a[N],c+1);
}

int main()
{
    int j,t,r,c,x,n,i;
    cin>>t;
    while(t--)
    {

        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
            check[i]=0;
        }

        for(i=1;i<=n;i++)
        {
            if(check[i]!=0) continue;
            dfs(i,0);
        }

        for(i=1;i<=n;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;


    }
}
