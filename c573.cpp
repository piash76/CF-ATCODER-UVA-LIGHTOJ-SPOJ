#include<bits/stdc++.h>
using namespace std;

int main()
{
    float h,climbh,slideh,f,i,j,k,hafterc,hafters,ch,d;
    int c=0;
    while(1)
    {
        c=0;


        cin>>h>>ch>>slideh>>f;
        if(h==0)
        {
            break;
        }
        d=(f/100)*ch;
        climbh=0.0;
        hafterc=0.0;
        while(1)
        {
            c++;

            hafterc=hafterc+ch;

            hafterc=hafterc-slideh;
             ch=ch-d;
           if(hafterc>h)
           {
               cout<<"success on day "<<(c-1)<<endl;
               break;
           }

            if(hafterc<0)
           {
               cout<<"failure on day "<<c<<endl;
               break;
           }

        }
    }

}
