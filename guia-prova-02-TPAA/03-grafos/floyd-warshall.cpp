// Floyd-Warshall e um algoritmo que calcula o menor caminho entre todos os
// pares de vertices de um grafo ponderado.

long long n;
vector<vector<long long>> dist(n, vector<long long>(n, -1));

for (int k = 0; k < n; k++)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (dist[i][k] == -1long long || dist[k][j] == -1long long)
                continue;
            if (dist[i][j] == -1 || dist[i][j] > dist[i][k] + dist[k][j])
            {
                dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
    }
}