#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ul;

int main() {
	int t,j=0;
	cin >> t;
	while(t--)
	{
		j++;
	    int n,i,ans=INT_MAX;
	    cin >> n;
	    for(i=1;i<=((int)(sqrt(n))+1);i++)
	    {
	        if(n%i==0) ans = min(ans, abs((n/i)-i));
	    }
	    cout << "Case #" << j << ": " <<abs(ans) << endl;
	}
	return 0;
}
