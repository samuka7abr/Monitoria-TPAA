#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int A;
    if (!(cin >> A)) return 0;

    vector<string> pilha;
    pilha.reserve(A);

    for (int k = 0; k < A; k++) {
        string cmd;
        cin >> cmd;
        if (cmd == "infiltrar") {
            string s;
            cin >> s;
            pilha.push_back(s);
        } else if (cmd == "chute") {
            if (!pilha.empty()) pilha.pop_back();
        } else if (cmd == "totem") {
            if (pilha.empty()) cout << "acordado\n";
            else cout << "dentro do sonho de " << pilha.back() << "\n";
        }
    }

    return 0;
}
