
///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>

#define ll long long
#define pll  pair<ll,ll>

#define ff    first
#define ss    second

#define  mp  make_pair
#define  pb  push_back

#define cy  cout<<"YES"<<endl
#define cn   cout<<"NO"<<endl


using namespace std;

const ll inf=1e18;
const int mod=1e9+7;
const int mod2=2147483647; ///2^31-1
const int M=500005;



int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);



    ll t,i,j;
    cin>>t;
    while(t--)
    {
        ll a,b;cin>>a>>b;

        string s;cin>>s;

        ll n=s.size();

        for(i=0;i<n;i++)
        {
            if(s[i]=='1') b--;
            else if(s[i]=='0') a--;
        }

        bool f=true;

        for(i=0;i<n/2;i++)   /// ???    111
        {
            if(s[i]=='?' and s[n-i-1]!='?')
            {
                if(s[n-i-1]=='1')
                {
                    if(b==0)
                    {
                        f=false;break;
                    }
                    else
                    {
                        s[i]='1';
                        b--;
                    }

                }
                else if(s[n-i-1]=='0')
                {
                    if(a==0)
                    {
                        f=false;break;
                    }
                    else
                    {
                        s[i]='0';
                        a--;
                    }

                }
            }
        }


        if(f)
        {
            for(i=0;i<n/2;i++)  ///111 ???
        {
            if(s[n-i-1]=='?' and s[i]!='?')
            {
                if(s[i]=='1')
                {
                    if(b==0)
                    {
                        f=false;break;
                    }
                    else
                    {
                        s[n-i-1]='1';
                        b--;
                    }

                }
                else if(s[i]=='0')
                {
                    if(a==0)
                    {
                        f=false;break;
                    }
                    else
                    {
                        s[n-i-1]='0';
                        a--;
                    }

                }
            }
        }

        }





        if(f)
        {

        for(i=0;i<n/2;i++)
        {
            if(s[i]=='?')
            {
                ll mx=max(a,b);

                if(mx<2) {f=false;break;}

                if(mx==a)
                {
                    s[i]=s[n-i-1]='0';
                    a-=2;

                }
                else if(mx==b)
                {
                    s[i]=s[n-i-1]='1';
                    b-=2;

                }
            }
        }

        }


        if(n%2 and f)
        {
            if(s[n/2]=='?')
            {
                ll mx=max(a,b);

                if(mx<1) {f=false;break;}

                if(mx==a)
                {
                   s[n/2]='0';
                    a-=1;

                }
                else if(mx==b)
                {
                   s[n/2]='1';
                    b-=1;

                }
            }

        }



        if(f)
        {
             for(i=0;i<n/2;i++)
              {
                if(s[i]!=s[n-i-1] and s[i]!='?' and s[n-i-1]!='?') {f=false;break;}
              }

              if(a!=0 or b!=0 ) f=false;
        }









        if(f) cout<<s<<endl;
        else cout<<-1<<endl;




    }

    return 0;

}




