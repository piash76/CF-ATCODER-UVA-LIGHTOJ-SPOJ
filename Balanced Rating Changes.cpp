#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,n,t,k,s=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        s+=a[i]/2;
    }
    if(s==0)
    {
         for(i=0;i<n;i++)
         {
           cout<<a[i]/2<<endl;
         }
    }
    else if(s>0)
    {

        for(i=0;i<n;i++)
        {
            if(a[i]<0 && a[i]%2!=0)
            {
                a[i]--;
                s--;
            }

            if(s==0)
            {
               for(i=0;i<n;i++)
               {
                cout<<a[i]/2<<endl;
               }
               break;
            }

        }

    }
    else
    {
        for(i=0;i<n;i++)
        {
            if(a[i]>0 && a[i]%2!=0)
            {
                a[i]++;
                s++;
            }

            if(s==0)
            {
               for(i=0;i<n;i++)
               {
                cout<<a[i]/2<<endl;
               }
               break;
            }

        }
    }

}
