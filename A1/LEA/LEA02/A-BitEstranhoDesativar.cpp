#include <bits/stdc++.h>
using namespace std;

/*
    Ideia de resolução:
        - Construir um número auxiliar (desativador) que possui 0 na posição do bit
          que queremos desativar e 1 em todas as outras posições.
        - Fazer a operação AND entre o número original e o desativador.
        - Isso garante que apenas o bit escolhido seja zerado, mantendo os demais inalterados.
*/

int main (void) {
    int n, b; // n = quantidade de números, b = índice do bit a ser desativado
    cin >> n >> b;

    for (int i = 0; i < n; i++) {
        int v; // número a ser analisado
        cin >> v;

        int desativador = 0;

        // desloca o bit 1 para a posição b
        // exemplo: b = 2 → desativador = 0000 0100
        desativador = (1 << b);

        // inverte os bits do desativador
        // exemplo: b = 2 → desativador = 1111 1011
        desativador = ~desativador;

        // aplica operação AND para zerar o bit em posição b
        // exemplo: v = 0010 1111 e b = 2
        //          0010 1111
        //      AND 1111 1011
        //      ----------------
        //          0010 1011
        v = v & desativador;

        // imprime o número com o bit b desativado
        cout << v << endl;
    }

    return 0;
}
