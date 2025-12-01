const int maxn = 1e5, inf = 1e9; // Checar limites

vector<int> adj[maxn];
vector<int> dis(maxn, inf);
queue<int> q;

void bfs(int x)
{
    dis[x] = 0;
    q.push(x);
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (int v : adj[u])
        {
            if (dis[v] > dis[u] + 1)
            {
                dis[v] = dis[u] + 1;
                q.push(v);
            }
        }
    }
}
