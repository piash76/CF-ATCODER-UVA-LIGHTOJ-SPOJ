#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    int i,j,x=0,y=0,n;
    cin>>n;
    cin>>a;

    if(n%2)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    for(i=0;i<n;i++)
    {
        if(a[i]=='(')x++;
        else x--;
        if(x<-1)break;


    }

    if(x==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;



}
