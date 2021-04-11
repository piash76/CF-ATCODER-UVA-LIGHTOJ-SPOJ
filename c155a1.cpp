#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,cnt=0,a,maxa,mini;
    cin>>n>>a;
    maxa=a,mini=a;

    for(i=1;i<n;i++)
    {
        cin>>a;
        if(a>maxa)
        {
            maxa=a;
            cnt++;
        }
        if(a<mini)
        {
            mini=a;
            cnt++;
        }
    }
    cout<<cnt<<endl;
}
