




///PROBLEM DESCRIPTION:


#include<bits/stdc++.h>

#define speed() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);



#define ll long long
#define cy  cout<<"YES"<<endl
#define cn   cout<<"NO"<<endl


using namespace std;




const int mod = 1000000007;


const int maxn =1000005;///1e6
ll a[maxn];


int main()
{


    speed()



    ll t,i,j,cas=0;
    cin>>t;
    while(t--)
    {
        string s;cin>>s;

        ll n=s.size();

        vector<ll> v;

        for(i=0;i<n;)
        {
            if(s[i]=='o' and i+1<n and s[i+1]=='n' and i+2<n and s[i+2]=='e')
            {
                //cout<<"BEFORE "<<i<<endl;

                v.push_back(i+1);
                i+=3;

                 //cout<<"AFTER "<<i<<endl;
            }
            else if(s[i]=='t' and i+1<n and s[i+1]=='w' and i+2<n and s[i+2]=='o' and i+3<n and s[i+3]=='n' and i+4<n and s[i+4]=='e')
            {
               //  cout<<"BEFORE "<<i<<endl;

                v.push_back(i+2);
                i+=5;

                //cout<<"AFTER "<<i<<endl;
            }
            else if(s[i]=='t' and i+1<n and s[i+1]=='w' and i+2<n and s[i+2]=='o')
            {
                // cout<<"BEFORE "<<i<<endl;

                v.push_back(i+1);
                i+=3;

                 //cout<<"AFTER "<<i<<endl;

            }
            else i++;



        }

        cout<<v.size()<<endl;
        for(auto x:v) cout<<x+1<<" ";
        cout<<endl;



    }

}




