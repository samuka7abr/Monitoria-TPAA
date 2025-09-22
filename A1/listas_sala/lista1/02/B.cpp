#include <bits/stdc++.h>
using namespace std;
#define otim ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/* Ideia de Resolução:
 * criar uma função externa com parametro N
 * verificar os valores base
 * criar as variáveis de prev inicializando-as como 0 e 1 (P(0), P(1))
 * faz um looping de 2 até N declarando a variável de "atual" como 2 * prev1 + prev2
 * prev2 tem seu valor igual a prev1 e prev1 agora é "atual" afinal prev1 é  P(N)
 * Implementa a recorrência P(n) = 2*P(n-1) + P(n-2) sem recursão.
 * */

unsigned long long pell (int N) {
	if (N == 0) return 0;
	if (N == 1) return 1;

	unsigned long long prev2 = 0, prev1 = 1;

	for(int i = 2; i <= N ; i++){
		unsigned long long atual = 2ull * prev1 + prev2;
		prev2 = prev1;
		prev1 = atual;
	}

	return prev1;
}


int main(){
	otim;
	int C;
	cin >> C;
	
	while(C--){
		int N;
		cin >> N;

		cout << pell(N) << "\n";
	}

	return 0;
}
