#include<bits/stdc++.h>
using namespace std;

int prime(int a)
{
    int i,f=0,r;
    if(a==1 || a==2)
    {
        return 1;
    }
    else
    {


    for(i=2;i<a;i++)
    {
        r=a%i;
        if(r==0)
        {
            f=1;
            break;
        }
    }
    if(f==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    }
}

int main()
{
    int t,n,i,r,s,f1,f2,f3,f4,l,k,g;
    cin>>g;

   for(k=1;k<=g;k++)
    {

        cin>>n;
        f1=prime(n);
        t=n;
        s=0;
        while(t!=0)
        {
          r=t%10;
          s=s+r;
          t=t/10;
        }
        f2=prime(s);
        l=0;
        t=n;
        while(t!=0)
        {
          r=t%10;
          if(r==9)
          {
              l=1;
              break;
          }
          t=t/10;
        }
        if(l==0)
        {
            f3=1;
        }
        else
        {
            f3=0;
        }
        if(n>10)
        {
            f4=1;
        }
        else
        {
            f4=0;
        }


        if(f1!=1)
        {
            cout<<"Case "<<k<<": Not Prime Number."<<endl;
        }
        else if(f1==1 && f2==1 && f3==1 && f4==1)
        {
            cout<<"Case "<<k<<": Interesting Number."<<endl;
        }
        else if(f1==1 && (f2==0 || f3==0 || f4==0))
        {
            cout<<"Case "<<k<<": Prime but Not Interesting Number."<<endl;
        }




    }
}
