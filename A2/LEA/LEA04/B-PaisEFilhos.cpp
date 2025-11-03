#include <bits/stdc++.h>
using namespace std;

/*
    Ideia de resolução:
        - Filho esquerdo de um nó i: 2*i; filho direito: 2*i + 1.
        - Pai de um nó i: i / 2.
        - Para cada consulta, imprimir: pai (ou "RAIZ"), seguido dos filhos (ou "NULL").
        - Verificar limites do vetor e o valor -1 para evitar acessos inválidos.
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