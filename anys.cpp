#include<bits/stdc++.h>

using namespace std;


int main()
{
        /*
    TEST case //test case input
    string1
    string2
    string3

    string1
    string2
    string3

    string1
    string2

    ......


    */
    int t;
    cin>>t;
    getchar(); ///taking the endline
   for(int i=1;i<=t;i++)
    {
        string s;
        while(getline(cin,s)) ///taking input strings,getline(cin,s) inputs endline input

        {
            cout<<s<<endl;
            if(s[0]=='\0') ///means the end of ith test case getting 0 length string
            {
                cout<<"YES"<<endl;
                break;
            }
            else
            {
                ///statement
            }

        }

    }

}
