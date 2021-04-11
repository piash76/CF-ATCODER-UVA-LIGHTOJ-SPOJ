#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,cnt=0,i,j,s;
    cin>>n>>k;
    for(i=1;;i++)
    {
        s=n*i;
        if(s%10==k)
        {
           cnt=i;
           break;
        }
        else if(s%10==0)

        {
            cnt=i;
            break;
        }

    }
    cout<<cnt<<endl;
}
