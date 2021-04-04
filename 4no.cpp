#include<bits/stdc++.h>
using namespace std;
void rot(int ar[],int n)
{
	int i,tem;

    tem=ar[0];
    for(i=0;i<n-1;i++)
    {
		ar[i]=ar[i+1];
	}
	ar[n-1]=tem;
	cout<<"After roatating the array by 1 cycle:"<<endl;
    for(i=0;i<n;i++) cout<<ar[i]<<"  ";

}
int main()
{
	int n,i;
	cout<<"Array Size: "<<endl;
	cin>>n;
	int a[n];
   for(i=0;i<n;i++) cin>>a[i];
    rot(a,n);
}
