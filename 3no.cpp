#include<bits/stdc++.h>
using namespace std;

void lar(int ar[], int n)

{
    int i,a,b,c;
   if (n < 3)
    { cout<<"Numbers cant be found"<<endl;
        return;
    }
    a=b=c=0;
    for (i = 0; i <n ; i ++)
    {
        if (ar[i] > a)
        {
            c=b;
            b=a;
            a=ar[i];
        }
   else if (ar[i] >b)
        {
            c=b;
            b=ar[i];
        }
else if (ar[i] >c)
{
    c=ar[i];
}


}

cout<<"The Largest three elements are :"<<endl;
   cout<<a<<"  "<<b<<"  "<<c<<endl;

}

int main()
{
    int n,i;
    cout<<"Enter the array size:"<<endl;
    cin>>n;
    int a[n+5];
    cout<<"Enter the array element:"<<endl;
    for(i=0;i<n;i++) cin>>a[i];

    lar(a,n);

}
