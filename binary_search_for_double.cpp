

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



const double eps=1e-10;  ///meaning we count 8 place after point


bool Equal(double x,double y)  ///x==y
{
    return fabs(x-y)<eps;
}


bool Greater(double x,double y) ///x>y
{
    return x-y>eps;
}

double Lesser(double x,double y)  ///x<y
{
    return y-x>eps;
}


int main()
{

    double a=1.1111111121;
    double b=1.1111111111;

    if(Equal(a,b)) cy;
    else cn;


   /* while(r-l>eps)
    {
        double mid=(l+r)/2.0;

        if(Chek(mid))
        {
            ans=mid;   ///for max
            l=mid;
        }
        else r=mid;
    }


    while(iteration<=3000)
    {
        ///work
        iteration++;
    }*/




    return 0;

}



