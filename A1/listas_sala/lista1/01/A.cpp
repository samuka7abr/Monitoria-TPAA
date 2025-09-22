#include <bits/stdc++.h>
using namespace std;
#define otim ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/* Ideia de Resolução:
 * lê a variável D e quebra o loop quando ela for = -1
 * declara duas variáveis de long long para representar os dois "lados"  do inteiro
 * faz um loop transformando o char i da string s em um int
 * depois de transformada em int, verifica se o módulo dela por 2 é 0
 * se sim, itera na variável A, se não, itera na B
 * depois disso, faz a subtração de A e B
 * se esse número resultante em módulo com 11 for 0, é divisível por 11
 * */

int main(){
	otim; 

	int D;
	while (true) {
        	cin >> D;
        	if (D == -1) break;
        	string s;
        	cin >> s;
        	long long A = 0, B = 0;
        	for (int i = 0; i < D; ++i) {
            		int d = s[i] - '0';
            		if (i % 2 == 0) A += d;
            		else           B += d;
        	}
        	long long S = A - B;
        	bool div11 = (S % 11 == 0);
        	cout << s << ": "
             	<< A << " - " << B << " = " << S
             	<< " - " << (div11 ? "sim" : "nao") << "\n";
    	}

	return 0;
}
