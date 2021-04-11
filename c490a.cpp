#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,mi,p=0,m=0,w,s=0,flag=1,cnt=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==1)
        {
            p++;
        }
        else if(a[i]==2)
        {
            m++;
        }
        else
        {
            s++;
        }
    }

    mi=p;
    if(mi>m)
    {
        mi=m;
    }
    if(mi>s)
    {
        mi=s;
    }
    w=mi;
    cout<<w<<endl;
    if(w==0)
    {
        return 0;
    }
      while(1)
      {

        for(j=0;j<n;j++)
        {

            if(flag==1)
            {
                if(a[j]==1)
                {
                    a[j]=-1;
                    cout<<(j+1)<<" ";
                    flag=2;
                    cnt++;
                }
            }

            if(flag==2)
            {
                if(a[j]==2)
                {
                    a[j]=-1;
                    cout<<(j+1)<<" ";
                    flag=3;
                    cnt++;
                }
            }

            if(flag==3)
            {
                if(a[j]==3)
                {
                    a[j]=-1;
                    cout<<(j+1)<<endl;
                    flag=1;
                    cnt++;
                }
            }

            if(cnt==(3*w))
            {
                return 0;
            }
        }



        }



}
