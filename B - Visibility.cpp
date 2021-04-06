///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>

#define ll long long
#define pll  pair<ll,ll>

#define ff    first
#define ss    second

#define  mp  make_pair
#define  pb  push_back

#define cy  cout<<"YES"<<endl
#define cn   cout<<"NO"<<endl


using namespace std;

const ll inf=1e18;
const int mod=1e9+7;
const int mod2=2147483647; ///2^31-1
const int M=500005;

ll a[M];



int main()
{
    int h, w, x, y;
    cin >> h >> w >> x >> y;
    vector<string> s(h + 1);
    for(int i = 1; i <= h; i++) cin >> s[i];
    int res = 0;
    for(int i = y - 1; i > 0; i--){
        if(s[x][i-1] == '#') break;
        res++;
    }
    for(int i = x - 1; i > 0; i--){
        if(s[i][y-1] == '#') break;
        res++;
    }
    for(int i = y + 1; i <= w; i++){
        if(s[x][i-1] == '#') break;
        res++;
    }
    for(int i = x + 1; i <= h; i++){
        if(s[i][y-1] == '#') break;
        res++;
    }
    res++;
    cout << res << endl;
}
