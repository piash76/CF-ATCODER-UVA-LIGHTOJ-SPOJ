#include <bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        int x = 0, y = 0;
        map<pii, int> mp;
        vector<pii> v;
        mp[{x, y}] = 1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
                x--;
            else if (s[i] == 'R')
                x++;
            else if (s[i] == 'D')
                y--;
            else if (s[i] == 'U')
                y++;
           if (mp[{x, y}] != 0)
            {
                v.push_back({i + 2 - mp[{x, y}], mp[{x, y}]});
            }
            mp[{x, y}] = i + 2;
        }
        sort(v.begin(), v.end());
        if (v.empty())
            cout << -1 << endl;
        else
            cout << v[0].second << " " << v[0].second + v[0].first - 1 << endl;
    }
    return 0;
}
