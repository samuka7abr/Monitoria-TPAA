#include <bits/stdc++.h>
using namespace std;
#define otim ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/* Ideia de resolução:
 * dado um número V e uma posição B, precisamos definir o bit na posição B como 1
 * para isso, usamos a operação OR bitwise com uma máscara que tem apenas o bit B definido
 * a máscara é criada com (1ULL << B), que desloca 1 para a posição B
 * o resultado V | (1ULL << B) define o bit B como 1, mantendo os outros bits inalterados*/

int main(){
	otim;
	int N, B;
	cin >> N >> B;
	

	for(int i = 0; i < N; i++){
		unsigned long long V;
		cin >> V;

		unsigned long long res = V | (1ULL << B);

		cout << res << "\n";
	}
	return 0;
}
