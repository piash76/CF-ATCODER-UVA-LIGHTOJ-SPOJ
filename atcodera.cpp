#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
   int a,b;
   cin>>a>>b;

   if(2*b<a)
   {
       cout<<a-(2*b)<<endl;
   }
   else if(2*b>=a)
   {
       cout<<"0"<<endl;
   }
}
