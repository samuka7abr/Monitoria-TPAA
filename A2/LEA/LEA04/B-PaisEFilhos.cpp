#include <bits/stdc++.h>
using namespace std;

/*
    Ideia de resolução:
        Dentro de um vetor conseguimos achar os filhos de uma árvore binária
    multiplicando o valor do índice por 2
        Para encontrar o nó pai fazemos o inverso e dividimos o índice por 2
        Por fim verificamos as condições presentes no exercício para printar
    corretamente
*/

int main (void) {

    int n;
    cin >> n;

    vector<int> v(n + 1);

    for (int i = 1; i < n + 1; i++){
        cin >> v[i];
    }

    int c;
    cin >> c;

    for (int i = 0; i < c; i++){
        int consulta;
        cin >> consulta;

        int noPai = consulta / 2;
        int noFilhoEsquerda = consulta * 2;
        int noFilhoDireita = (consulta * 2) + 1 ;

        if (v[1] == -1){
            cout << "NULL" << endl;
        } else {
            if (consulta == 1){
                cout << "RAIZ - ";
            } else {
                cout << v[noPai] << " - ";
            }
            if (noFilhoEsquerda > n || v[noFilhoEsquerda] == -1){
                cout << "NULL ";
            } else {
                cout << v[noFilhoEsquerda] << " ";
            }
            if (noFilhoDireita > n || v[noFilhoDireita] == -1){
                cout << "NULL\n";
            } else {
                cout << v[noFilhoDireita] << endl;
            }
        }
    }

    return 0;
}