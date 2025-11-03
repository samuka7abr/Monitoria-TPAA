#include <bits/stdc++.h>
using namespace std;

/*
    Ideia de resolução:
        - Usar um set<char> para detectar caracteres repetidos em uma palavra.
        - Inserir cada caractere no set; se a inserção falhar, a palavra não é heterograma.
        - Retornar "WEAKORD" em caso de repetição; caso contrário, "STRONGRAMA".
*/

string verificar_heterograma(const string& palavra) {
    set<char> caracteres_vistos;

    for (char c : palavra) {
        if (!caracteres_vistos.insert(c).second) { // verificando se o caractere já existe dentro do set
            return "WEAKORD";
        }
    }
    return "STRONGRAMA";
}

int main (void) {

    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        string w;
        cin >> w;

        set<char> caracteres;
        cout << verificar_heterograma(w) << endl;
    }

    return 0;
}