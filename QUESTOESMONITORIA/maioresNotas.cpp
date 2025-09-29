#include <bits/stdc++.h>
using namespace std;
#define otim ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main (void) {
    otim

    int a, q;
    cin >> a >> q;

    vector<int> notas(a);

    for (int i = 0; i < a; i++) cin >> notas[i];

    sort(notas.begin(), notas.end());

    for (int i = 0; i < q; i++){
        int q;
        cin >> q;

        auto it = upper_bound(notas.begin(), notas.end(), q);
        int notasMaiores = notas.end() - it;

        cout << notasMaiores << " notas maiores que " << q << endl;
    }

    return 0;
}