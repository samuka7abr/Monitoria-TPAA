#include <bits/stdc++.h>
using namespace std;
#define otim ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/* 
 * Ideia de Resolução:
 * criação de uma função de conversão de bases que recebe o número desejado
 * e a base de conversão desejada
 * 
 * A ideia da função é achar dentro da string dig o a posição do módulo do número e da base (n % base)
 * assim, iterando na string S o valor encontrado em dig a na posição n % base
 * 
 */


string convertBase(unsigned long long n, int base){
    if(base == 10) return to_string(n);
    if(n == 0) return "0";
    static const string dig = "0123456789ABCDEF";
    string s;
    while(n > 0){
        s.push_back(dig[n % base]);
        n /= base;
    }
    reverse(s.begin(), s.end());
    return s;
}

int main(){
    otim;
    long long N; int B;
    while (cin >> N >> B){ //lê N e B a cada iteração
        if (N == -1 && B == -1) break; // dá break no loop quando algum dos valores é = -1
        cout << convertBase((unsigned long long)N, B) << "\n";
    }
    return 0;
}

