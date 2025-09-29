#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M, Q;
    if (!(cin >> N >> M >> Q)) return 0;

    vector<vector<int>> a(N, vector<int>(M));
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cin >> a[i][j];

    vector<int> firstCol(N), lastCol(N);
    for (int i = 0; i < N; i++) {
        firstCol[i] = a[i][0];
        lastCol[i] = a[i][M - 1];
    }

    while (Q--) {
        int V;
        cin >> V;

        int lo = int(lower_bound(lastCol.begin(), lastCol.end(), V) - lastCol.begin());
        int hi = int(upper_bound(firstCol.begin(), firstCol.end(), V) - firstCol.begin()) - 1;

        if (lo > hi) {
            cout << "-1 -1\n";
            continue;
        }

        int ansI = -1, ansJ = -1;
        for (int i = lo; i <= hi; i++) {
            auto it = lower_bound(a[i].begin(), a[i].end(), V);
            if (it != a[i].end() && *it == V) {
                ansI = i;
                ansJ = int(it - a[i].begin());
                break;
            }
        }

        if (ansI == -1) cout << "-1 -1\n";
        else cout << ansI << ' ' << ansJ << '\n';
    }

    return 0;
}

