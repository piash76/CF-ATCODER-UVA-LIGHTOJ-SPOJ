


    #include<bits/stdc++.h>
    #
    using namespace std;

    int main()
    {


        ll i,j,n,p,w,d,x,y,z,a;
        cin>>n>>p>>w>>d;
        for(y=0;y<=w;y++) //I don't understand why looping from 0 to w will guarantee finding a solution
        {
            a=p-y*d;
            if(a%w==0)
            {
                x=a/w;
                if(x>=0 && y>=0 && x+y<=n)
                {
                    z=n-(x+y);
                    cout<<x<<" "<<y<<" "<<z<<endl;
                    return 0;
                }
            }
        }
        cout<<-1<<endl;
    }
