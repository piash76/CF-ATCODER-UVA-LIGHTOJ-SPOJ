#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,d,t,i,s=0,a;
    cin>>n>>d;
    for(i=0;i<n;i++)
    {
        cin>>a;
        s+=a;
    }



    if(s+(n-1)*10>d)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        cout<<(d-s)/5<<endl;
    }
}
