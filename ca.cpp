#include<iostream>
using namespace std;
int main()
{
    int n,i,s=0,t;
    long long k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int a[n];
        s=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            s+=a[i];
        }
        (s>k)? cout<<"No"<<endl : cout<<"Yes"<<endl;
    }
}

