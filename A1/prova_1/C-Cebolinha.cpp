#include <bits/stdc++.h>
using namespace std;

/*
    Ideia de resolução:
    - Utilizar getline() para ter o input da linha toda
    - Passar caractere por caractere do input
    - Alterar as letras 'r' e 'R' por 'l' e 'L' respectivamente
*/

int main (void) {

    int f;
    cin >> f;

    getchar();

    for (int i = 0; i < f; i++) {
        string s;
        getline(cin, s);

        for (int j = 0; j < s.size(); j++){
            if (s[j] == 'r'){
                s[j] = 'l';
            } else if (s[j] == 'R'){
                s[j] = 'L';
            }
        }

        cout << s << endl;
    }

    return 0;
}