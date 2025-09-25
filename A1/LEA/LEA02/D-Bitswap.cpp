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

int main (void)
{

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        ull n;
        cin >> n;

        ull p, q;
        cin >> p >> q;

        ull bitTemp; // variável auxiliar para manipulação dos bits

        ull bitp = (n >> p) & 1;
        ull bitq = (n >> q) & 1;
        bitTemp = 1ULL << p;
        bitTemp = ~bitTemp;
        n = n & bitTemp;

        bitTemp = 1ULL << q;
        bitTemp = ~bitTemp;
        n = n & bitTemp;

        bitTemp = bitq << p;
        n = n | bitTemp;

        bitTemp = bitp << q;
        n = n | bitTemp;

        cout << n << endl;
    }

    return 0;
}
