#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    long long c,d;
    long long x,y,f=0,l,i,j,temp,r,s;

    cin>>l;
    long long a[l],b[l];
    cin>>c>>d;

    temp=c;
    i=0;
   while(temp!=0)
    {
       r=temp%10;
       a[i]=r;
       i++;
       temp=temp/10;
    }


    temp=d;
    j=0;
   while(temp!=0)
    {
       s=temp%10;
       b[j]=s;
       j++;
       temp=temp/10;
    }


    for(i=0;i<l;i++)
    {
        x=abs(a[i]-b[i]);
        if(a[i]<b[i])
        {

        y=a[i]+(10-b[i]);
        }
        else
        {
            y=b[i]+(10-a[i]);
        }

        f=f+min(x,y);
    }

    cout<<f<<endl;
    return 0;
}
