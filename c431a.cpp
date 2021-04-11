#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    int x,b,c,d,s,i,e=0,f=0,g=0,h=0;
    cin>>x>>b>>c>>d;
    cin>>a;

    for(i=0;i<a.size();i++)
    {
        if(a[i]=='1')
        {
            e++;
        }
        else if(a[i]=='2')
        {
            f++;
        }
        else if(a[i]=='3')
        {
            g++;
        }
        else if(a[i]=='4')
        {
            h++;
        }
    }

    s=e*x+f*b+g*c+h*d;
    cout<<s<<endl;
}
