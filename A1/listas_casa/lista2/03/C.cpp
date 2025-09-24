#include <bits/stdc++.h>
using namespace std;
#define otim ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/* Ideia de resolução:
 * dado um array ordenado e um valor S, verificar se existem dois números que somam S
 * utilizamos a técnica de dois ponteiros: um no início (left) e outro no final (right)
 * se a soma for menor que S, movemos o ponteiro da esquerda para a direita
 * se a soma for maior que S, movemos o ponteiro da direita para a esquerda
 * se encontrarmos a soma exata, retornamos SIM, caso contrário NAO*/

int main(){
    otim;
    int T; 
    if(!(cin >> T)) return 0;
    while(T--){
        int N; 
        cin >> N;

        vector<long long> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }

        long long S; 
        cin >> S;

        int left = 0, right = N - 1;
        bool found = false;

        while(left < right) {
            long long somaAtual = arr[left] + arr[right];
            if(somaAtual == S){
                found = true;
                break;
            } else if(somaAtual < S){
                left++;
            } else {
                right--;
            }
        }

        if(found){
            cout << "SIM\n";
        } else {
            cout << "NAO\n";
        }
    }
    return 0;
}

