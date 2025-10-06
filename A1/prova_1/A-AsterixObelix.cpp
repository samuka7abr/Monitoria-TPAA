#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;

/*
    Ideia de resolução:
    - Fazer a operação lógica AND entre os atributos
    - contar a quantidade de 1 presentes após a operação
*/

int main (void) {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        ull a, b;
        cin >> a >> b;

        ull resultado = a & b;
        int contador = 0;

        while (resultado > 0) {
            if (resultado & 1) {
                contador++;
            }
            resultado >>= 1;
        }

        cout << contador << endl;
    }

    return 0;
}