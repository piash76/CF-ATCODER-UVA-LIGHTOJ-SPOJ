#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,j,r,s,t,k,mi;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n;
         vector<int> v;
        for(j=1;j<=n/2;j++)
        {

            if(n%j==0)
            {
               s=n/j;
               r=abs(s-j);
               v.push_back(r);
            }

        }

        sort(v.begin(),v.end());
        cout<<"Case #"<<i<<": "<<v[0]<<endl;

    }

}
