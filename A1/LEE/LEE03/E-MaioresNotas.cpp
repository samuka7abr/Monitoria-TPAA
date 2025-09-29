#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int A, Q;
    cin >> A >> Q;

    vector<int> notas(A);
    for (int i = 0; i < A; i++){
        cin >> notas[i];
    }

    sort(notas.begin(), notas.end());

    ostringstream resultado;

    for(int i = 0; i < Q; i++){
        int corte;
        cin >> corte;
        
        auto it = upper_bound(notas.begin(), notas.end(), corte);
        int contagem = notas.end() - it;
            
        resultado << contagem << " notas maiores que " << corte << "\n";
    }

    cout << resultado.str();
    
    return 0;
}
