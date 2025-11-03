#include <bits/stdc++.h>
using namespace std;

/*
    Ideia de resolução:
        Traduzir o código de selection-sort disponibilizado no enunciado para C++
        Ponto principal da questão é entender a lógica do selection-sort
*/

int main (void) {

    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }

    int contarTroca = 0;

    for (int i = 0; i < n; i++){
        int menorValor = i;
        for (int j = i + 1; j < n; j++){
            if (v[j] < v[menorValor]){
                menorValor = j;
            }
        }
        if (v[i] != v[menorValor]){
                    int temp = v[i];
            v[i] = v[menorValor];
            v[menorValor] = temp;
            contarTroca++;
        }
        if (i == 0){
            cout << v[i];
        } else {
            cout << " " << v[i];
        }
    }

    cout << "\n" << contarTroca << "\n";

    return 0;
}