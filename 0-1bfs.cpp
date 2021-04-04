#include <bits/stdc++.h>

#define ll long long

using namespace std;
const ll INF = 1e18;
const int SIZE_LIMIT = 1e3+5;
char maze[SIZE_LIMIT][SIZE_LIMIT];

ll dp[SIZE_LIMIT][SIZE_LIMIT];

int main() {
  //memset(maze, 0, sizeof(maze));
 // memset(dp, 0x3f, sizeof(dp));

  int h = 0, w = 0, ch, cw, dh, dw;
  scanf("%d%d%d%d%d%d", &h, &w, &ch, &cw, &dh, &dw);
  ch--;cw--;dh--;dw--;

   for(int i=0;i<h;i++)
    {
        for(int j=0;j<w;j++)
        {
            cin>>maze[i][j];
          dp[i][j]=INF;
        }
    }

  deque<pair<int, int>> q;
  q.push_back({ch, cw});
  dp[ch][cw]=0;

   const int dx[]={+1,-1,+0,+0};
   const int dy[]={+0,+0,+1,-1};


    while (!q.empty())
    {
   // auto p = q.front();
    ll ux=q.front().first;
    ll uy=q.front().second;
    q.pop_front();


    for (int i = 0; i < 4; ++i)
    {
      int nx = dx[i]+ux, ny = dy[i]+uy;
      if (nx>=0 and nx<h and ny>=0 and ny<w and maze[nx][ny] == '.' && dp[nx][ny] > dp[ux][uy]+0)
      {
        dp[nx][ny] = dp[ux][uy]+0;
        q.push_front({nx, ny});
      }
    }
    // jump
    for (int i = -2; i <= 2; ++i)
    {
      for (int j = -2; j <= 2; ++j)
      {
        int nx = ux+i, ny = uy+j;
        if (nx>=0 && nx<h && ny>=0 && ny<w && maze[nx][ny] == '.' && dp[nx][ny] > dp[ux][uy]+1) {
          dp[nx][ny] = dp[ux][uy]+1;
          q.push_back({nx, ny});
        }
      }
    }

  }

  if (dp[dh][dw] == INF) printf("-1\n");
  else printf("%d\n", dp[dh][dw]);



  return 0;
}



vector<int> d(n, INF);
d[s] = 0;
deque<int> q;
q.push_front(s);
while (!q.empty()) {
    int v = q.front();
    q.pop_front();
    for (auto edge : adj[v]) {
        int u = edge.first;
        int w = edge.second;
        if (d[v] + w < d[u]) {
            d[u] = d[v] + w;
            if (w == 1)
                q.push_back(u);
            else
                q.push_front(u);
        }
    }
}
