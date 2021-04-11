#include<bits/stdc++.h>
using namespace std;

int main()
{
    string x;
    int i,j,s=0,d;
    cin>>x;
    j='a';
    for(i=0;i<x.size();i++)
    {
        d=abs(x[i]-j);
        if(d>13)
        {
            d=26-d;
        }
        s+=d;
        j=x[i];

    }


    cout<<s<<endl;


}
