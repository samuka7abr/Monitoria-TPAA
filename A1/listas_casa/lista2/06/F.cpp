#include <bits/stdc++.h>
using namespace std;

/* Ideia de resolução:
 * dado A, B e Y, precisamos encontrar C tal que (A | B | C) = Y
 * primeiro verificamos se é possível: se (A | B) tem bits definidos que Y não tem, é impossível
 * usamos (D & (~Y)) para verificar se há bits em D que não estão em Y
 * se for possível, calculamos C = Y ^ D, onde D = A | B
 * isso funciona porque (A | B | C) = Y implica que C deve "completar" os bits que faltam*/

int main(){
    int T;
    cin >> T;

    for(int i = 0 ; i < T ; i++){
        long long A, B;
        long long Y;
        cin >> A >> B;
        cin >> Y;

        long long D = A | B;

        if((D & (~Y)) != 0){
            cout << -1 << endl;
        }else{
            long long C = Y ^ D;
            cout << C << endl;
        }
    }
    

    return 0;
}
