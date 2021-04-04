#include <bits/stdc++.h>
using namespace std;


int bin(int ar[], int l, int h, int key)
{
    if (l > h) return -1;

    int m= (l+h)/2;
    if (ar[m] == key) return m;


    if (ar[l] <= ar[m])
    {

        if (key >= ar[l] and key <= ar[m])
        return bin(ar, l, m-1, key);

        return bin(ar, m+1, h, key);
    }


    if (key >= ar[m] && key <= ar[h])
        return bin(ar, m+1, h, key);

    return bin(ar, l, m-1, key);
}


int main()
{
    int n,k,i,x;
    cin>>n>>k;
    int a[n+5];
    for(i=0;i<n;i++) cin>>a[i];
    x= bin(a,0, n-1, k);

    if (x != -1) cout << "Index: " << x << endl;

    else  cout << "Key not found";

}
