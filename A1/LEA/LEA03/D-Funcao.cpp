#include <bits/stdc++.h>
using namespace std;
#define otim ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*
    Ideia de resolução:
    - Utilizar busca binária no intervalo de X para encontrar o valor mais próximo possível que satisfaça a função.
    - Como o resultado é aproximado, é necessário garantir iterações suficientes para alcançar a precisão desejada.
*/

double funcao (double a, double b, double x){
    return a * x + b * cos(x);
}

int main (void) {
    otim

    double limiteInferior = 0;
    double limiteSuperior = pow(10, 9);

    double a, b, c;
    cin >> a >> b >> c;

    // Realiza 250 iterações de busca binária para aproximar o valor de x
    for (int i = 0; i < 250; i++){
        double meio = (limiteInferior + limiteSuperior) / 2.0;
        double resultado = funcao(a, b, meio);

        if (resultado < c) {
            limiteInferior = meio;
        } else {
            limiteSuperior = meio;
        }
    }

    // Imprime o valor de x encontrado com 4 casas decimais de precisão
    double x = (limiteInferior + limiteSuperior) / 2.0;
    cout << fixed << setprecision(4) << x << endl;

    return 0;
}