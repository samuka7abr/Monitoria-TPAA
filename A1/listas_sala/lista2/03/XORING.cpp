#include <bits/stdc++.h>
using namespace std;

/*
    Ideia de resolução:
        Utilizar os códigos da tabela ASCII para identificar se os caracteres
        são maiúsculos ou minúsculos e aplicar as regras de formação da nova palavra.

        A tabela ASCII representa cada caractere como um número inteiro.
        Exemplo: 'a' = 97 e 'A' = 65. A diferença entre letras minúsculas e
        maiúsculas é 32. Assim, para converter 'a' em 'A', basta fazer 97 - 32 = 65.
*/

int main(void)
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string r, s;
        cin >> r >> s;

        // inicializa a string t com o mesmo tamanho de r, preenchida com espaços
        // (pressupõe-se que r e s possuem o mesmo tamanho)
        string t(r.size(), ' ');

        // percorre as letras de r e s aplicando as regras de formação da nova palavra
        for (int j = 0; j < r.size(); j++) {
            if ((r[j] >= 'A' && r[j] <= 'Z') && (s[j] >= 'A' && s[j] <= 'Z')) {
                // caso 1: ambas maiúsculas → escolhe r[j] (poderia ser s[j] também)
                t[j] = r[j];
            } else if ((r[j] >= 'A' && r[j] <= 'Z') && (s[j] >= 'a' && s[j] <= 'z')) {
                // caso 2: r maiúscula e s minúscula → escolhe a minúscula (s[j])
                t[j] = s[j];
            } else if ((r[j] >= 'a' && r[j] <= 'z') && (s[j] >= 'A' && s[j] <= 'Z')) {
                // caso 3: r minúscula e s maiúscula → escolhe a minúscula (r[j])
                t[j] = r[j];
            } else if ((r[j] >= 'a' && r[j] <= 'z') && (s[j] >= 'a' && s[j] <= 'z')) {
                // caso 4: ambas minúsculas → converte para maiúscula
                // no ASCII, basta subtrair 32
                t[j] = r[j] - 32;
                // poderia usar s[j] - 32 também, pois ambas são minúsculas
            }
        }

        cout << t << endl;
    }

    return 0;
}
