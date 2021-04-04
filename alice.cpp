#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int i,j,k,l,m,n,t,b,r,p,s;
    string a;
    cin>>t;
    while(t--)
    {
        int r1,p1,s1,win=0;
        cin>>n;
        cin>>r1>>p1>>s1;
        r=r1,p=p1,s=s1;
        cin>>a;
        for(i=0;i<a.size();i++)
        {
            if(a[i]=='R')
            {
               p1--;
               //cout<<p1<<endl;
               if(p1>=0)
               {
                  win++;
               }
            }
            else if(a[i]=='P')
            {
                s1--;
                //cout<<s1<<endl;
               if(s1>=0)
               {
                   win++;
               }
            }
            else if(a[i]=='S')
            {

                r1--;
                //cout<<r1<<endl;
               if(r1>=0)
               {
                   win++;
               }
            }

        }
       // cout<<win<<endl;
        k=(n/2)+(n%2);
        if(win>=k)
        {
            cout<<"YES"<<endl;
            string t;
            for(i=0;i<n;i++)
            {
                if(a[i]=='R' && p>0)
                {
                    t+='P';
                    p--;
                }
                else if(a[i]=='P' && s>0)
                {
                    t+='S';
                    s--;
                }
                else if(a[i]=='S' && r>0)
                {
                   t+='R';
                    r--;
                }
                else
                {
                    t+='*';
                }

            }
            for(i=0;i<n;i++)
            {
                if(t[i]!='*')
                {
                    continue;
                }
                else if(t[i]=='*' &&  r>0)
                {
                    t[i]='R';
                    r--;
                }
                else if(t[i]=='*' && p>0)
                {
                    t[i]='P';
                    p--;
                }
                else if(t[i]=='*' && s>0)
                {
                    t[i]='S';
                    s--;
                }
            }
            cout<<t<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
}
