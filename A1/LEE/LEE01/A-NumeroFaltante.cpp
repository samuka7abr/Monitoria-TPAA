#include <bits/stdc++.h>
using namespace std;

/*
	ideia de resolução:
	- a soma dos números de 1 a N é dada por:
		N * (N + 1) / 2
	- se somarmos os números que foram dados em input, e subtrairmos esse valor da soma total, teremos o número que está faltando
*/

int main(){
	int N;
	cin >> N;

	int somaTotal = N * (N + 1) / 2; //progressão aritmética (pega a soma total de [1..N])
	int somaFaltante = 0;
	
	for(int i = 0; i < N - 1; i++){ // N - 1 pq tá faltando um número
		int numero; //declara o número em loop para que seu valor seja zerado a cada iteração
		cin >> numero;
		
		somaFaltante += numero; // atribui em somaFaltante: valor em somaFaltante + numero
	}

	int valor = somaTotal - somaFaltante; // calcula o número faltante a partir da soma total da permutação e valor da soma dos números colocados em input

	cout << valor << endl;
	// poderia ser feito assim:
	// cout << somaTotal - somaFaltante;
    return 0;
}
