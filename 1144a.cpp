#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    int i,j,n,cnt=0,l;
    cin>>n;
    while(n--)
    {
        cin>>a;
        l=a.length();
        sort(a.begin(),a.end());
        for(i=0;i<l;i++)
        {
            if(a[i+1]-a[i]==1)
            {
                cnt++;
            }
        }
        if(cnt==(l-1))
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
        cnt=0;
    }
}
