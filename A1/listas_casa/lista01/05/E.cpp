#include <bits/stdc++.h>
using namespace std;
#define otim ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/* Ideia de resolução:
 * cria a função M (uma função recursiva)
 * ao invés de retornar a mesma função duas vezes, chamamos ela mesma no else como retorno
 * apenas alterando o valor de N para que a condição seja diferente
 * */

int M(int N){
    if(N > 100){
        return N - 10;
    }else{
        return M(M(N + 11)); //recursão
    }
}

int main(){
    int C;
    cin >> C;

    for(int i =0 ; i < C; i++){
        int N;
        cin >> N;
        cout << M(N) << endl;
    }
    return 0;
}
