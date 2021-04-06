#include<bits/stdc++.h>
#define ll long long
#define see_you return 0
#define godspeed() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int fun(string s,int n)
{
     int f;
    for(int i=n;i<s.size();i++)
    {
        if(s[i]!='?')
        {
            f=i;
            break;
        }
    }
    return f;
}
int main()
{
    godspeed()
    string s;
    int i,j,l,k,n,t,f;
    cin>>t;
    while(t--)
    {
        f=0;
        cin>>s;
        for(i=0;i<s.size();i++)
        {
            if(s[i]!='?' && s[i+1]!='?' && s[i]==s[i+1])
            {
                f=1;
                break;
            }
        }

        if(f) cout<<-1<<endl;
        else
        {
        if(s[0]=='?')
        {
            if(s[1] == 'a')
                s[0]='b';
            else if(s[1] == 'b')
                s[0]='c';
            else if(s[1] == 'c')
                s[0]='a';
            else
                s[0]='a';
        }

            for(i=1;i<s.size()-1;i++)
            {

            if(s[i]=='?')
            {
                if( (s[i-1]=='a' && s[i+1]=='b') || (s[i-1]=='b'  && s[i+1]=='a'))
                {
                    s[i]='c';
                }
                else if( (s[i-1]=='a' && s[i+1]=='c') || (s[i-1]=='c'  && s[i+1]=='a') )
                {
                    s[i]='b';
                }
                else if( (s[i-1]=='b' && s[i+1]=='c') || (s[i-1]=='c'  && s[i+1]=='b') )
                {
                    s[i]='a';
                }

                else if(s[i-1]==s[i+1])
                {
                    if(s[i-1]=='a') s[i]='b';
                    else if(s[i-1] == 'b')
                        s[i]='c';
                    else if(s[i-1] == 'c')
                        s[i]='a';
                    else
                        s[i] = 'a';
                }

                else if(s[i+1] == '?')
                {
                    if(s[i-1] == 'a')
                        s[i]='b';
                    else if(s[i-1] == 'b')
                        s[i]='c';
                    else if(s[i-1] == 'c')
                        s[i]='a';
                }


            }

          }

        if(s[i] == '?')
        {


            if(s[i-1] == 'a')
                s[i]='b';
            else if(s[i-1] == 'b')
                s[i]='c';
            else if(s[i-1] == 'c')
                s[i]='a';

        }

        cout<<s<<endl;
        }

    }
    see_you;


}
