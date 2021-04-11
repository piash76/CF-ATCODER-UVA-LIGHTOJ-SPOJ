#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,r,s=0;

    cin>>n;

      while(n!=0)
      {
          if(n%2==1)
          {
              s++;
              n--;
          }
          else
          {
              n=n/2; //__builtin_count(n)
          }
      }

    cout<<s<<endl;
    cout<<__builtin_popcount(n)<<endl;

}
