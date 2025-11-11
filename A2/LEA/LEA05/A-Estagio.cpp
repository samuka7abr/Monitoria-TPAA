#include <bits/stdc++.h>
using namespace std;

/*
    Ideia de resolução:
        O problema descreve características de um set
        - Armazenar em ordem (no caso do problema ordem alfabética)
        - Não repetir caracteres
        Para resolver o problema basta colocar todos os caracteres do input dentro de um set
*/

int main (void) {

    set<char> letras;
    string s;
    cin >> s;

    for (char c : s){
        letras.insert(c);
    }

    for (char c : letras) {
        cout << c;
    }
    cout << endl;

    return 0;
}