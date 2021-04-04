#include<bits/stdc++.h>
#define ll long long
#define see_you return 0
#define godspeed() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int ar[100000];
int main()
{
    godspeed()
    int n,i,j,k,a,b,r,x,y,d,s;

    cin>>n;
    while(n--)
    {
        s=0;
      cin>>a>>b; //a=3 b=7

      d=b/a;  //d=2
      r=b%a;  //r=1
      x=a-r;
      j=0;
      //cout<<s<<endl;
      for(i=1;i<=x;i++)
      {
          //cout<<d<<endl;
          ar[j]=d;
          j++;
      }
      for(i=1;i<=r;i++)
      {
         //cout<<a/r<<endl;
         ar[j]=d+1;
         j++;
      }
      for(i=0;i<j;i++)
      {
          //cout<<ar[i]<<endl;
          s+=ar[i]*ar[i];
      }

      cout<<s<<endl;


    }

   see_you;
}
