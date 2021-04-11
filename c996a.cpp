#include<bits/stdc++.h>
using namespace std;

int main()
{
  long long n,s=0;
  cin>>n;

  if(n/100!=0)
  {
      s=s+(n/100);
      n=n%100;
  }
   if(n/20!=0)
  {
      s=s+(n/20);
      n=n%20;

  }
   if(n/10!=0)
  {
      s=s+(n/10);
     n=n%10;

  }
   if(n/5!=0)
  {
      s=s+(n/5);
     n=n%5;

  }
  if(n/1!=0)
  {
     s=s+(n/1);
     n=n%1;

  }


  cout<<s<<endl;
}
