#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,i,s=0,d,m;

    cin>>a>>b;
    s=a;

   while(a>=b)
    {

         d=(a/b);
         s=s+d;
         m=a%b;
         a=m+d;


    }

    cout<<s<<endl;
}
