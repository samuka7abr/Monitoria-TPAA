#include <bits/stdc++.h>
using namespace std;
#define otim ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/* Ideia de resolução:
 * um "pribit" é um número cuja quantidade de bits 1 na representação binária é um número primo
 * para cada número, contamos quantos bits 1 ele possui usando operações bitwise
 * usamos (temp & 1) para verificar o bit menos significativo e temp >>= 1 para deslocar
 * depois verificamos se essa quantidade é um número primo usando a função ehPrimo*/

bool ehPrimo(int x) {
	if (x < 2) return false;
	for (int i = 2; i <= sqrt(x); i++) {
		if (x % i == 0)
		return false;
    	}
    	return true;
}

int main(){
	otim;
	int N; cin >> N;

	for(int i = 0; i < N; i ++){
		long long num; cin >> num;

		long long temp = num;

		int count = 0;

		while(temp){
			count += (temp & 1);
			temp >>= 1;
		}

		if(ehPrimo(count)){
			cout << num << " eh um pribit\n";
		}else{
			cout << num << " nao eh um pribit\n";
		}
		
	}
	return 0;
}
