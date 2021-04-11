#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,j,k,t,o,e,u,c=0,x;

    cin>>n>>m;
    int a[n];
    if(n==1)
    {
        if(n<m)
        {
        cout<<"-1"<<endl;
       return 0;
        }
        else
        {
            cout<<"1"<<endl;
            return 0;
        }

    }

     if(n==2)
     {
         if(n%m==0)
         {
             cout<<n<<endl;
             return 0;
         }
         else
         {

        cout<<(n-1)<<endl;
         return 0;
         }
     }

    x=n/1;
    a[0]=x;

    t=n/2+n%2;

    a[1]=t;
    i=2;
    t=t-1;
    while(1)
    {
        if(t==0)
        {
            break;
        }
        e=t*2;
        o=n-e;
        u=t+o;
        a[i]=u;
        i++;
        t=t-1;


    }

    sort(a,a+i);




    for(j=0;j<i;j++)
    {

        if(a[j]%m==0)
        {
            cout<<a[j]<<endl;
            return 0;
        }
        else
        {
            c++;
        }
    }
    if(c==i)
    {
       cout<<"-1"<<endl;
       return 0;
    }

}
