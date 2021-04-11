#include<bits/stdc++.h>
#define ll long long
#define bye return 0
#define godspeed() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define inf 1e9
using namespace std;

int main()
{
    godspeed()
    int a,b,x,y,i,j,k,t,l,n,m;
    cin>>n;
    int A[n];
    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cin>>m;
    int B[m];
    for(i=0;i<m;i++)
    {
        cin>>B[i];
    }
    sort(A,A+n);
    sort(B,B+m);
    cout<<A[n-1]<<" "<<B[m-1]<<endl;
    bye;


}
