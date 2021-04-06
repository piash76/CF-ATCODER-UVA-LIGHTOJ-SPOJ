#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int n, t, a[100005], ma=0, l=0, cnt=0;
    scanf("%d%d", &n, &t);
    for(int i=0; i<n; i++) {
        scanf("%d", &a[i]);
        while(t<a[i]) t+=a[l], l++, cnt--;
        t-=a[i], cnt++;
        if(cnt>ma) ma=cnt;
    }
    printf("%d", ma);
    return 0;
}
