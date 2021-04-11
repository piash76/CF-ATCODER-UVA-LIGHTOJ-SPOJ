#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,i,s=0;
    string a;
    cin>>n;
    while(n--)
    {
        cin>>a;
        if(a=="Tetrahedron")
        {
            s=s+4;
        }
        else if(a=="Cube")
        {
            s=s+6;
        }
        else if(a=="Octahedron")
        {
            s=s+8;
        }
        else if(a=="Dodecahedron")
        {
            s=s+12;
        }
        else if(a=="Icosahedron")
        {
            s=s+20;
        }

    }

    cout<<s<<endl;
}
