#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,m;
	cout<<"GIVE THE SIZE OF ARRAY:"<<endl;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
    {
		cin>>a[i];
	}
	m=a[0];
	for(i=0;i<n;i++)
    {
        if(a[i]>m) m=a[i];

	}
	cout<<m<<" IS THE LARGEST ELEMENT IN THIS ARRAY"<<endl;
	return 0;
}

