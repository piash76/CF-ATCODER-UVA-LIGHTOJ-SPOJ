    #include<bits/stdc++.h>
    using namespace std;

    int main()
    {
        int i,j,k,l;
        string a;
        cin>>l>>k;
         cin>>a;
        // cout<<a<<endl;
         if(l==1 && k!=0)
         {
             cout<<0<<endl;
             return 0;
         }

        if(a[0]!='1' && k!=0)
        {
            a[0]='1';
            k--;
        }


        for(i=1;i<l;i++)
        {
            if(a[i]!='0' && k!=0)
            {
               a[i]='0';
                k--;
            }

        }
        cout<<a;


    }
