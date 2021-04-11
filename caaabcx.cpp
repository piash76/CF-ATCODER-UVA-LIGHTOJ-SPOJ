#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll a,b,c,i,j,k,n,t,q,d1,d2;
    while(cin>>a>>b>>c)
    {
        if(a==0 && b==0 && c==0)
        {
            break;
        }
         d1=c-b;
         d2=b-a;
        float m1=c/b;
         float m2=b/a;
         i=floor(m1);
         j=floor(m2);
         if(d1==d2)
         {
             cout<<"AP"<<" "<<c+d1<<endl;
         }
         else if(m1==m2 && (m1==i && m2==j))
         {
             cout<<"GP"<<" "<<c*m1<<endl;
         }
    }
}
