#include<iostream>
#include<math.h>
#define pi 3.141592653589793
using namespace std;

int main()
{
    double x1,y1,x2,y2,x3,y3,a,b,c,m,n,p,q,o,r,s,A,D;
    while(1)
    {
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
       m=(x2-x1);
       n=(x3-x1);
       o=(x3-x2);
       p=(y2-y1);
       q=(y3-y1);
       r=(y3-y2);
       a=sqrt(pow(m,2)+pow(p,2));
       b=sqrt(pow(n,2)+pow(q,2));
       c=sqrt(pow(o,2)+pow(r,2));
       s=(a+b+c)/2;
       A=sqrt(s*(s-a)*(s-b)*(s-c));
       D=(a*b*c)/2*A;

       printf("%.2lf\n",D*pi);

    }

}
