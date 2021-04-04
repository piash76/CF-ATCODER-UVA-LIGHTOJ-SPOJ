    #include<bits/stdc++.h>
    #define ll long long
    #define see_you return 0
    #define godspeed() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    using namespace std;

    int main()
    {

        ll i,j,n,k,l,t,x,y,mx,mn;
        cin>>t;
        while(t--)
         {
             mx=-1,mn=100000,x=-1,y=-1,f=0;
             cin>>n;
             ll a[n];
             for(i=0;i<n;i++)
             {
                 cin>>a[i];

             }



             {
             for(i=1;i<n;i++)
             {
                if(abs(a[i-1]-a[i])>=2)
                {
                    x=i-1;
                    y=i;
                    f=1;
                 break;

                }

             }

            if(f){


             cout<<"YES"<<endl;
             cout<<x+1<<" "<<y+1<<endl;
            }
            else cout<<"NO"<<endl;

             }
         }


    }
