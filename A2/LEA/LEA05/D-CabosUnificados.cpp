#include <bits/stdc++.h>
using namespace std;

/*
    Ideia de resolução:
        Retirar sempre os cabos mais curtos da pilha para diminuir o custo total
        Após a junção dos cabos é necessário adicionar o cabo resultante de volta na fila de prioridade
        Repetir o processo até que sobre apenas um cabo
*/

int main (void) {
    int n;
    cin >> n;
    priority_queue<int, vector<int>, greater<int>> cabos;
    for (int i = 0; i < n; i++){
        int c;
        cin >> c;
        cabos.push(c);
    }
    int custo = 0;
    while (cabos.size() > 1){
        int cabo1 = cabos.top();
        cabos.pop();
        int cabo2 = cabos.top();
        cabos.pop();
        custo += cabo1 > cabo2 ? cabo1 : cabo2;
        cabos.push(cabo1 + cabo2);
    }
    cout << custo << endl;
    return 0;
}