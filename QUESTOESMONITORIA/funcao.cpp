#include <bits/stdc++.h>
using namespace std;
#define otim ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

double funcao (double a, double b, double x){
    return a * x + b * cos(x);
}

int main (void) {
    otim

    double limiteInferior = 0;
    double limiteSuperior = pow(10, 9);

    double a, b, c;
    cin >> a >> b >> c;

    double meio;
    for (int i = 0; i < 250; i++){
        meio = (limiteInferior + limiteSuperior) / 2.0;
        double resultado = funcao(a, b, meio);

        if (resultado < c) {
            limiteInferior = meio;
        } else {
            limiteSuperior = meio;
        }
    }

    cout << fixed << setprecision(4) << meio << endl;

    return 0;
}