#include <bits/stdc++.h>
using namespace std;

/*
    Ideia de resolução:
    - Usar um dicionário (unordered_map) que associa cada participante a um conjunto
        (set para evitar repetição de brindes) com os brindes que ele esperava receber.
    - Ler P participantes e preencher o mapa: chave = nome do participante, valor = set de brindes.
    - Para cada uma das S entregas lidas:
            * Verificar se o participante existe no mapa.
            * Se existir, checar se o brinde recebido está no set de expectativas:
                    - se sim, imprimir que o participante conseguiu ganhar o brinde;
                    - se não, imprimir que ele infelizmente ganhou outro brinde.
            * Se o participante não existir no mapa, imprimir a mensagem padrão para
                quem não estava na lista ("queria ganhar qualquer coisa...").
*/

int main() {
    int p, s;
    cin >> p >> s;

    unordered_map<string, set<string>> brindes;

    for (int i = 0; i < p; ++i) {
        string participante, brinde1, brinde2, brinde3;
        cin >> participante >> brinde1 >> brinde2 >> brinde3;
        brindes[participante] = {brinde1, brinde2, brinde3};
    }

    for (int i = 0; i < s; ++i) {
        string participante, brinde_recebido;
        cin >> participante >> brinde_recebido;

        if (brindes.find(participante) != brindes.end()) {
            if (brindes[participante].find(brinde_recebido) != brindes[participante].end()) {
                cout << participante << " conseguiu ganhar " << brinde_recebido << "!" << endl;
            } else {
                cout << participante << " infelizmente ganhou " << brinde_recebido << "..." << endl;
            }
        } else {
            cout << participante << " queria ganhar qualquer coisa e ganhou " << brinde_recebido << "!" << endl;
        }
    }

    return 0;
}