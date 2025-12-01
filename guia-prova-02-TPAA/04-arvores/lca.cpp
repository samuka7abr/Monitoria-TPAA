// Lowest Common ancestor (LCA) - ou ancestral comum mais baixo, e o nome tipico
// dado para o seguinte problema: dado uma Arvore cuja raiz e um vertice
// arbitrario e dois vertices u,v que a pertencem, diga qual e o no mais
// baixo(relativo a raiz) que e ancestral de u,v.

int depth[100005];
vector<int> graph[100005];

void pre_process_depth(int u, int d)
{
    depth[u] = d;
    for (auto adj : graph[u])
    {
        pre_process_depth(adj, d + 1);
    }
}

int lca(int u, int v)
{
    if (depth[u] < depth[v])
    {
        swap(u, v);
    }
    while (depth[u] > depth[v])
    {
        u = pai[u];
    }
    while (u != v)
    {
        u = pai[u];
        v = pai[v];
    }
    return u;
}
