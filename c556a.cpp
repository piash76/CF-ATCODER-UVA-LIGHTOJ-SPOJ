#include<bits/stdc++.h>
using namespace std;

int main()
{
   vector<int> v;
   vector<int>::iterator it;
   int n,i,j,a,l,m;
   cin>>n;
   for(i=1;i<=n;i++)
   {
       cin>>a;
       v.push_back(a);
   }

   m=n;

   for(i=0;i<m;i++)
   {
       if((v[i]==0 && v[i+1]==1) || (v[i]==1 && v[i+1]==0))
       {
           it=v.begin();
           advance(it,i);
           v.erase(v.begin(),it);
           it=v.begin();
           advance(it,i+1);
           v.erase(v.begin(),it);
       }
       m=v.size();
   }

   l=v.size();
   cout<<l<<endl;

}
