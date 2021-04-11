#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    string a;
    int n=0,i,j,l=0;
    cin>>a;
    l=a.size();
    sort(a.begin(),a.end());
    for(i=0;i<l;i++)
    {
        if(a[i]!=a[i+1])
        {
            n++;
        }
    }

   if(n%2==0)
   {
       cout<<"CHAT WITH HER!"<<endl;
   }
   else
   {
       cout<<"IGNORE HIM!"<<endl;
   }



}


