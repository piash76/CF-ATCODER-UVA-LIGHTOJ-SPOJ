#include<bits/stdc++.h>






using namespace std;

#define ll long long


const int mod = 1000000007;





int main()
{




    ll t,i,j;
    cin>>t;
    while(t--)
    {
        string str;
        ll sum=0;
        cin>>str;

        ll n=str.size();



        for(i=1;i<n;i++)
        {
            if(str[i]==str[i-1] and i-1>=0 and str[i]!='#')
            {
                sum++;
                str[i]='#';

            }

            if(str[i-2]==str[i] and i-2>=0 and str[i]!='#')
            {

                sum++;
                str[i]='#';

            }
        }



        cout<<sum<<endl;


    }

    return 0;

}
