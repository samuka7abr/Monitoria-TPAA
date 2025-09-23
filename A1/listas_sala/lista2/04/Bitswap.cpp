#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long; 
// usamos unsigned long long porque podemos manipular bits até o índice 63
// e n é sempre positivo

/*
    Ideia de resolução:
        Precisamos trocar dois bits em posições diferentes de um número.

        Casos possíveis em uma troca:
            1. 1 ↔ 1 (permanece igual)
            2. 1 ↔ 0 (os bits trocam de valor)
            3. 0 ↔ 1 (os bits trocam de valor)
            4. 0 ↔ 0 (permanece igual)

        A estratégia:
            - Capturar os valores atuais dos bits nas posições p e q.
            - Zerar os bits nessas posições.
            - Reatribuir os valores trocados nas respectivas posições.
*/

int main (void){

    int t;
    cin >> t; // número de casos de teste

    for (int i = 0; i < t; i++){
        ull n;      // número no qual a troca será realizada
        cin >> n;

        ull p, q;   // índices dos bits que serão trocados
        cin >> p >> q;

        ull bitTemp; // variável auxiliar para manipulação dos bits

        // captura o valor do bit na posição p
        ull bitp = (n >> p) & 1;

        // captura o valor do bit na posição q
        ull bitq = (n >> q) & 1;

        // zera o bit na posição p
        bitTemp = 1ULL << p;
        bitTemp = ~bitTemp;
        n = n & bitTemp;

        // zera o bit na posição q
        bitTemp = 1ULL << q;
        bitTemp = ~bitTemp;
        n = n & bitTemp;

        // coloca o valor original de q na posição p
        bitTemp = bitq << p;
        n = n | bitTemp;

        // coloca o valor original de p na posição q
        bitTemp = bitp << q;
        n = n | bitTemp;

        // imprime o número após a troca de bits
        cout << n << endl;
    }

    return 0;
}
