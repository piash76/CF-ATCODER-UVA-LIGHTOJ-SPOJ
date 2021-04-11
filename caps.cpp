
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
     int i,l;
    string a,b;
    cin>>a;

    b=a;


    if(a[0]>='a' && a[0]<='z')
    {
        a[0]=a[0]-32;
    }

    else if(a[0]>='A' && a[0]<='Z')
    {
        a[0]=a[0]+32;
    }

    for(i=1;a[i]!='\0';i++)
    {
        if(a[i]>='A' && a[i]<='Z')
        {
            a[i]=a[i]+32;
        }
        else
          {
            cout<<b;
            exit(0);
          }
    }

    cout<<a;
}

