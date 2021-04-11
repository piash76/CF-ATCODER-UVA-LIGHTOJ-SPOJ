#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,c=0,i,j,k,d=0,a,b,e,f;
    cin>>n>>m;
    if(n>m)
    {
        while(1)
        {
            n--;
            c++;
            if(n==m)
            {
                cout<<c<<endl;
                return 0;
            }
        }
    }

    if(n<m)
    {
        i=2*n;
        if(i==m)
        {
           cout<<"1"<<endl;
                return 0;
        }

        j=n-1;
        if(j==m)
        {
            cout<<"1"<<endl;
                return 0;
        }
        if(m%n==0)
        {

       e=m/n;
        }
       k=2*n;
       c++;
       while(1)
       {


        if(k>m)
        {

           k=k-1;
           c++;
           if(k==m)
           {
               break;
           }

        }


        if(k<m)
        {
            k=k*2;
            c++;
           if(k==m)
           {
               break;
           }

        }




       }


       k=n-1;
       d++;
       if(k==0)
       {
          cout<<c<<endl;
          return 0;
       }

       while(1)
       {


        if(k>m)
        {

           k=k-1;
           d++;
           if(k==m)
           {

                break;
           }

        }


        if(k<m)
        {
            k=k*2;
            d++;
           if(k==m)
           {

                break;
           }

        }




       }


        b=min(c,d);
        a=min(b,e);
      cout<<a<<endl;
      return 0;
    }
}
