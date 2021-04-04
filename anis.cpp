#include <bits/stdc++.h>
using namespace std;

vector<int> v;

void sum(int x)
{
    for(int i=0;i<v.size();i++)
    {
        v[i]+=x;
    }
}

void mul(int x)
{
    for(int i=0;i<v.size();i++)
    {
        v[i]*=x;
    }
}

void div(int x)
{
    for(int i=0;i<v.size();i++)
    {
        v[i]/=x;
    }
}

int main()
{
	int t;
	int n;
	char ch;
	long long x;
	long long y;
	int q,j;

	cin >> t;

	for (int cs = 1; cs <= t; cs++)
    {
		cin >> n;
		cin >> q;


		for (int i = 0; i < n; i++) {
			cin >> v[i];
		}

		for (int k = 0; k < q; k++)
        {

        scanf("%d",&ch);
            if(ch=='S')
            {
                cin>>x;
                sum(x);
            }
            else if(ch=='M')
            {
                cin>>x;
                mul(x);
            }
            else if(ch=='D')
            {
                cin>>x;
                div(x);
            }
            else if(ch=='R')
            {
                reverse(v.begin(),v.end());
            }
            else if(ch=='P')
            {
                cin>>x>>y;
                swap(v[x],v[y]);

            }

        }

        printf("Case %d:\n",cs);
        for(j=0;j<v.size();j++)
        {
            cout<<v[j]<<" ";
        }
         cout<<endl;
        v.clear();




	}


}
