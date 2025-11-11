#include <bits/stdc++.h>
using namespace std;

/*
    Ideia de resolução:
        Como os dados serão exibidos de uma maneira específica:
        - Mostrar o detento com maior uso do celular primeiro
        - No caso de uso igual mostrar em ordem alfabética invertida
        A melhor estrutura para a resolução seria a priority_queue, que mantém a ordenação nos dois casos
*/

struct Detento {
    string s;
    int u;

    bool operator <(const Detento& outro) const {   // configuração da ordenação da priority_queue
        if (u != outro.u) {
            return u < outro.u;                     // maior uso de celular tem maior prioridade
        } else {
            return s < outro.s;                     // em caso de empate, ordem alfabética invertida
        }
    } 
};

int main (void) {

    priority_queue<Detento> detentos;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        string s;
        int u;
        cin >> s >> u;

        detentos.push({s, u});
    }

    while (!detentos.empty()){
        Detento d = detentos.top();
        cout << d.s << " " << d.u << "\n";
        d.u /= 2 ;
        detentos.pop();
        if (d.u > 0) {
            detentos.push(d);
        }
    }

    return 0;
}
