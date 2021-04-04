#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long a,b,c,l;
    cin>>a>>b>>c;
    if(abs(a-b)<2)
    {
        l=a+b+(2*c);
        cout<<l<<endl;
        return 0;
    }
    if(abs(a-b)>=2)
    {
       l=a+b+(2*c);
        cout<<(l-1)<<endl;
        return 0;
    }




}
