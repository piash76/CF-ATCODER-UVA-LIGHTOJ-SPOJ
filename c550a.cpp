#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    int i,j,f=0,r,s,p,q,f1=0,f2=0;
    cin>>a;
    f=0;
    for(i=0;i<a.size();i++)
    {
        if(a[i]=='A' && a[i+1]=='B')
        {

            r=i;

            break;
        }
    }

    for(i=r+2;i<a.size();i++)
    {
        if(a[i]=='B' && a[i+1]=='A')
        {
            f=1;
            s=i;
            break;


        }
    }

    if(r!=-1 && s!=-1)
    {
        f1=1;
    }


if(f==0)
{

    for(i=0;i<a.size();i++)
    {
        if(a[i]=='B' && a[i+1]=='A')
        {

            p=i;

            break;
        }
    }



    for(i=p+2;i<a.size();i++)
    {
        if(a[i]=='A' && a[i+1]=='B')
        {
            q=i;
            f=1;

            break;


        }
    }
}

if(p!=-1 && q!=-1)
{
    f2=1;
}

  if(f==0)
  {
      cout<<"NO"<<endl;
  }
  else
  {
      if(f1==1 || f2==1)
      {
         cout<<"YES"<<endl;
      }
      else
      {
          cout<<"NO"<<endl;
      }
  }







}
