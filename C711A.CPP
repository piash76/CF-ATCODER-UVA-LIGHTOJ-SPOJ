#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    int n,i,j=0,c=0,flag=0,k,l=0;
    string a;
    cin>>n;
    string b[n];
    for(i=1;i<=n;i++)
    {
        cin>>a;
        if(a[0]=='O' && a[1]=='O' && flag==0)
        {
           a[0]='+';
           a[1]='+';
           flag=1;
        }
        else if(a[3]=='O' && a[4]=='O' && flag==0)
        {
           a[3]='+';
           a[4]='+';
           flag=1;
        }
        else
        {
            c++;
        }
        b[j]=a;
        j++;

    }

    if(c==n)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    else
    {
        cout<<"YES"<<endl;
        for(k=0;k<j;k++)
        {
            cout<<b[k]<<endl;
        }
        return 0;
    }

}
