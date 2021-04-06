
#include<bits/stdc++.h>
using namespace std;
#define MAX 20001
#define Vampires 1
#define Lykans 2
vector<int>edge[MAX];
int visited[MAX];

int BFS(int source)
{
    int No_V = 0,No_L = 0;
    queue<int>q;
    q.push(source);
    visited[source] = Vampires;
    No_V++;

    while(!q.empty())
    {
        int u = q.front();
        q.pop();

        for(int i = 0; i < edge[u].size(); i++)
        {
            int v = edge[u][i];
            if(visited[v]==0)
            {
                if(visited[u]==Vampires)
                {
                    visited[v] = Lykans;
                    No_L++;
                }
                else
                {
                    visited[v] = Vampires;
                    No_V++;
                }
                q.push(v);
            }
        }
    }

    return max(No_L,No_V);
}

int main()
{
    int T;
    cin>>T;
    for(int t = 1; t <= T; t++)
    {
        int n, mx = 0;
        scanf("%d",&n);
        memset(visited, 0, sizeof(visited));
        for(int i = 0; i < MAX; i++)
            edge[i].clear();

        for(int i = 0; i < n; i++)
        {
            int u, v;
            scanf("%d %d",&u,&v);
            edge[u].push_back(v);
            edge[v].push_back(u);
        }

        for(int i = 1; i < MAX; i++)
        {
            if(!edge[i].empty() && visited[i]==0)
            {
                mx+=BFS(i);
            }
        }

        printf("Case %d: %d\n",t,mx);
    }

    return 0;
}
