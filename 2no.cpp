
#include<bits/stdc++.h>
using namespace std;

void rot(int a[],int n)
{
	int i,t;
            t=a[0];
	for(i=0;i<n-1;i++)
    {
		a[i]=a[i+1];
	}
	a[n-1]=t;
}
int main()
{
	int n,i,r;
	cout<<"GIVE THE SIZE OF THE ARRAY: "<<endl;
	cin>>n;
	cout<<"GIVE THE ROTATION NO: "<<endl;
	cin>>r;
	int a[n];

	for(i=0;i<n;i++) cin>>a[i];

	for(i=0;i<r;i++)  rot(a,n);

	cout<<"Rotated Array:"<<endl;
	for(i=0;i<n;i++) cout<<a[i]<<" ";


}


	cout<<"Rotated Array:"<<endl;
	for(i=0;i<n;i++) cout<<a[i]<<" ";


}


