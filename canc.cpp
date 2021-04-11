#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int a,b,c,i,j,k,n,q;
string s,t;

    while(1)
    {


    vector<char> v;
        cin>>n;
        if(n==0) break;
        cin>>s;
        int l=s.size();
        c=l/n;
        j=c;
        k=0;
        while(1)
        {

            if(j>l)
            {
               break;
            }
            for(a=k;a<j;a++)
            {
                v.push_back(s[a]);
            }
            reverse(v.begin(),v.end());
            //cout<<v.size()<<endl;
            for(int g=0;g<v.size();g++)
            {
               cout<<v[g];
            }
            v.clear();

            j+=c;
            k+=c;
        }
        cout<<endl;



    }
    return 0;
}
