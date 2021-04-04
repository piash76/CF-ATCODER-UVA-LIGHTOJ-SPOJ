 #include<bits/stdc++.h>
    #define ll long long
    #define godspeed() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    #define sc1(a) scanf("%d",&a)
    #define sc2(a,b) scanf("%d %d",&a,&b)
    #define cy  cout<<"YES"<<endl
    #define cn   cout<<"NO"<<endl
    #define f1(i,a,b)  for(int i=a;i<b;i++)
    #define f2(i,a,b) 	for(int i=a;i<=b;i++)

    #define min3(a,b,c)             min(a,min(b,c))
    #define min4(a,b,c,d)           min(a,min(b,min(c,d)))
    #define max3(a,b,c)             max(a,max(b,c))
    #define max4(a,b,c,d)           max(a,max(b,max(c,d)))
    #define max5(a,b,c,d,e)         max(max3(a,b,c),max(d,e))
    #define min5(a,b,c,d,e)         min(min3(a,b,c),min(d,e))
    #define mem(a,x)                memset(a,x,sizeof(a))
    #define see_you                     return 0
    #define SORT(v)                 sort(v.begin(),v.end())
    #define REV(v)                  reverse(v.begin(),v.end())
    #define print_case cout<<"Case "<<++caseno<<": ";
    using namespace std;

    int main()
    {
        godspeed()
         ll i,j,n,m,k,l,t,x,y,r,d,f,c,b,s,f1,g;
        cin>>t;
        while(t--)
        {
            f=0;
            cin>>n;
            ll a[n];
            f1(i,0,n) cin>>a[i];
            f1(i,0,n-1)
            {
                if(a[i]>a[i+1])
                {
                    k=i+1;
                    f1(j,k,n-1)
                    {
                        if(a[j]<a[j+1])
                        {
                            f=1;break;
                        }
                    }
                }
            }
            g=1;
            f1(i,0,n-1)
            {
                if(a[i]!=a[i+1])
                {
                    g=0;break;
                }
            }
            cout<<f<<endl;
            if(f==1 || g==1)
            {
                c=d=f1=0;
                f1(i,0,n-1)
                {
                    if(a[i]==0 && a[i+1]==0)
                    {
                        f1=1;break;
                    }
                }
                f1(i,0,n)
                {

                     if(a[i]==0 && i>0 && i<n-1)
                    {
                        f1=1;
                    break;
                    }
                  else  if(a[i]==0) c++;
                   else if(a[i]==1) d++;


                }
                if(c>=2)
                {
                    if(a[0]!=0 || a[n-1]!=0)  f1=1;
                }
                if(d>=2)
                {
                    if(a[0]!=1 || a[n-1]!=1) f1=1;
                }

                if(f1) cn;
                else  cy;
            }
            else
                cy;




        }




    }

