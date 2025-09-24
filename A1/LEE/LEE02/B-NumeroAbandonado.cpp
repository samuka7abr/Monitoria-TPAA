#include <bits/stdc++.h>
using namespace std;
#define otim ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/* Ideia de resolução:
 * dado um conjunto de pares de números, um número está sozinho
 * a ideia desse problema é printar o número sem par.
 * para isso, declaramos uma variável solitário atribuindo a mesma o valor 0
 * o valor solitário faz um xor com  o número lido (destacando se eles são iguais ou diferentes)
 * no fim da leitura, fica apenas o número que não é igual a nenhum dos outros, pois seu valor no xor fica como estava*/

int main(){
	otim;
	
	while(true){
		int N, solitario  = 0;;
		cin >> N;

		if(N == -1) break;
		
		while(N--){
			int num; cin >> num;
			solitario ^= num;
		}
		
		cout << solitario << "\n";
	}
	

	return 0;
}
