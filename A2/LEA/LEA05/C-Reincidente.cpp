#include <bits/stdc++.h>
using namespace std;

/*
        Ideia de resolução:
        Nesse problema podemos usar um mapa para armazenar os dados
        O crime cometido não é importante na questão, apenas a quantidade de crimes
        cometidos por cada indivíduo.
        Assim associamos um contados para cada nome no mapa.
*/

int main(void) {

    unordered_map<string, int> detidos;
    string nome;
    int numeroCrime;

    while (cin >> nome && nome != "fim" && cin >> numeroCrime && numeroCrime != 0) {
        int contador = detidos[nome];
        detidos[nome]++;
        if (contador == 0) {
            cout << nome << " eh reu primario" << endl;
        } else {
            cout << nome << " eh reincidente com " << contador << " crime(s)" << endl;
        }
    }   

    return 0;
}
