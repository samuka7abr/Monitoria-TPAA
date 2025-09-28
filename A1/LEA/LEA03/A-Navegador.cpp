#include <bits/stdc++.h>
using namespace std;

/*
    Ideia de resolução:
    - Criar uma "lista" com os sites acessados.
    - Como o site possui apenas a função de voltar e acessar novo site,
      podemos inserir na lista de sites quando o usuário passar um site novo
      e remover quando mandar o caractere "<".
*/

int main (void) {
    int n;
    cin >> n;

    vector<string> sites;

    for (int i = 0; i < n; i++){
        string s;
        cin >> s;
        if (s == "<"){
            if (sites.empty()){
                cout << "pagina em branco" << endl;
            } else {
                sites.pop_back();
                // Aqui fazemos uma segunda verificação após remover o site,
                // pois o programa pode dar erro quando removemos um valor de um vetor que já está vazio.
                if (sites.empty()){
                    cout << "pagina em branco" << endl;
                } else {
                    cout << sites.back() << endl;
                }
            }
        } else {
            sites.push_back(s);
            cout << s << endl;
        }
    }

    return 0;
}