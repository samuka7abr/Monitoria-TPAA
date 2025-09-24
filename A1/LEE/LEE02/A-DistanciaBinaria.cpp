#include <bits/stdc++.h>
using namespace std;
#define otim ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/* ideia de resolução:
 * a questão pede quantos bits a representação binária de um decinal X precisa mudar para chegar ao valor de Y
 * dado  isso, usamos uma operação de XOR(^) para destacar essas diferenças (pois a mesma apenas retorna 1 quando
 * os bits comparados forem diferentes)
 * a partir disso, usamos uma função builtin do c++ que conta os bits iguais a um de um número (contando as "diferenças
 * destacadas pelo XOR")*/

int main(){
	otim;
	int N; cin >> N;

	while(N--){
		unsigned long long X, Y;
		cin >> X >> Y;

		unsigned long long res = X ^ Y;

		cout << __builtin_popcountll(res) << "\n";
		
	}

	return 0;
}
