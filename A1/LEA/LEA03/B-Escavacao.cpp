#include <bits/stdc++.h>
using namespace std;

/*
    Solução:
    - Usar uma fila (vetor) para armazenar os caracteres.
    - Adiciona '<' na fila.
    - Ao encontrar '>', remove um '<' da fila se houver, e conta o par formado.
*/

int main (void) {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)     {
        string b;
        cin >> b;

        vector<char> pedrasPreciosas;
        int contador = 0;

        for (int j = 0; j < b.length(); j++) {
            if (b[j] == '<'){
                pedrasPreciosas.push_back(b[j]);
            } else if (b[j] == '>'){
                if (!pedrasPreciosas.empty() && pedrasPreciosas.back() == '<') {
                    contador++;
                    pedrasPreciosas.pop_back();
                }
            }
        }

        cout << contador << endl;
    }

    return 0;
}