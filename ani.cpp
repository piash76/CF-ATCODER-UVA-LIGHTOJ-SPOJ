    #include<bits/stdc++.h>
    using namespace std;
    int main(){
    int n,i;
    cin>>n;
    vector<int>v(2*n+1);
    if(n%2!=0)
    {
     cout<<"YES"<<endl;
     for(i=1;i<=n;i++)
    {
        v[i]=2*i-1;
    }
    for(i=1;i<=n;i++)
    {
        v[n+i]=2*i;
    }

    for(i=2;i<=2*n;i+=2)
    {
        swap(v[i],v[n+i]);
    }
    for(i=1;i<=2*n;i++)
    {
        cout<<v[i]<<" ";
    }
    }
     else
     cout<<"NO";
    }
