#include<bits/stdc++.h>
using namespace std;

int main()
{
    double x,y,a;
    cin>>x>>y>>a;
    x=ceil(x/a);
    y=ceil(y/a);
    cout<<(int)x*y<<endl;
}
