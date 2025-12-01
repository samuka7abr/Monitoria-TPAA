#include <bits/stdc++.h>
using namespace std;

void dfs(int u, int &cnt){
    visitado[u] = true;
    cnt++; 
    /* 
     * Esse count serve para fazer contagem dos itens de um grafo/subgrafo.
     * é usado principalmente em questões de contagem de componentes de um ciclo*/
    for(int v: adj[u]){
        if(!visitado[v]){
            dfs(v, cnt);
        }
    }
}

