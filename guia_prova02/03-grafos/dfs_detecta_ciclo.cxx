bool dfs(int u, int parent) {
    vis[u] = true;

    for (int v : adj[u]) {
        if (!vis[v]) {
            if (dfs(v, u)) return true;
        } else if (v != parent) {
            return true; // ciclo
        }
    }

    return false;
}
