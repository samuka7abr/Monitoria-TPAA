#include <bits/stdc++.h>
using namespace std;
#define otim ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pb push_back
using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
const int INF_INT = 1e9;
const ll INF_LL = 1e18; 
const int MOD = 1000000007;

int main(){
    otim;
	int N;
	cin >> N;

	int somaTotal = N * (N + 1) / 2; //progressão aritmética (pega a soma total de [1..N])
	int somaFaltante;
	
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
