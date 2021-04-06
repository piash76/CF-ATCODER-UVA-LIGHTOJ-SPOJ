#include<bits/stdc++.h>
using namespace std;

int main()
{
    int binary(int a[],int n,int x)
{

    int l=0,h=n-1,m,p;
    while(l<=h)
    {
        m=(l+h)/2;
        if(a[m]==x)
        {
            p=m;
            break;
        }
        if(x<a[m])
        {
            h=m-1;
        }
        else
        {
            l=m+1;
        }
    }
    if(l>h)
    {
        return -1;
    }
    else
    {
        return p+1;
    }
}
}
