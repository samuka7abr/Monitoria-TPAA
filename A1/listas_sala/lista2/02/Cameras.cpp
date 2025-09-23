#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long; // número pode ter até 64 bits

/*
    Ideia da solução:
    - Ativar bits específicos em um número inicialmente igual a 0.
    - Para isso, deslocamos o valor 1 até a posição desejada (bit 'a').
    - Em seguida, aplicamos OR para acumular os bits ativados no número final.
*/

int main (void)
{
    int n;
    cin >> n;

    ull numero = 0; // armazena o número final com os bits ativados

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;

        ull binario = (1ULL << a); // cria um número com 1 apenas na posição 'a'
        numero = numero | binario; // ativa o bit 'a' no número final
    }

    cout << numero << endl;

    return 0;
}
