




///PROBLEM DESCRIPTION:


#include<bits/stdc++.h>

#define speed() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);



#define ll long long
#define cy  cout<<"YES"<<endl
#define cn   cout<<"NO"<<endl

#define ff                      first
#define ss                      second

using namespace std;




const int mod = 1000000007;


const int mx =400009;
ll a[mx];


int main()
{


    speed()

    ll t,i,j,cas=0;
    cin>>t;
    while(t--)
    {
        ll n;cin>>n;
        ll h=n/2;


        map< ll,ll,greater<ll> > m;

        for(i=0;i<n;i++)
        {
            cin>>a[i];
            m[a[i]]++;
        }

        ll g=0,s=0,b=0;

        for(auto x:m)
        {
            //cout<<g<<" "<<s<<" "<<b<<endl;

           if(g==0 and x.ss<=h)
           {
              // cout<<" 1 x.ff "<<x.ff<<" x.ss "<<x.ss<<endl;

               g+=x.ss;
           }
           else if(g!=0 and s<=g and g+s+x.ss+b<=h)
           {
              // cout<<" 2 x.ff "<<x.ff<<" x.ss "<<x.ss<<endl;

               s+=x.ss;
           }
           else if(g!=0 and s>g and g+s+b+x.ss<=h)
           {
               //cout<<" 3 x.ff "<<x.ff<<" x.ss "<<x.ss<<endl;

               b+=x.ss;
           }
           else
           {
               break;
           }

        }

       if(g==0 or s==0 or b==0) {g=s=b=0;}

       if(g>=s or g>=b) {g=s=b=0;}

        cout<<g<<" "<<s<<" "<<b<<endl;



    }

    return 0;

}





