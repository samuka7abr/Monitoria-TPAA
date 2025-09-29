#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    ll X;
    if (!(cin >> N >> X)) return 0;

    vector<ll> t(N), k(N);
    ll lo = (1LL<<62), hi = (1LL<<62);
    for (int i = 0; i < N; i++) {
        cin >> t[i] >> k[i];
        lo = min(lo, t[i]);
        ll cand = t[i] + (X - 1) * k[i];
        hi = min(hi, cand);
    }

    auto views_until = [&](ll T) -> ll {
        ll s = 0;
        for (int i = 0; i < N; i++) {
            if (T >= t[i]) {
                s += (T - t[i]) / k[i] + 1;
                if (s >= X) return s;
            }
        }
        return s;
    };

    while (lo < hi) {
        ll mid = lo + (hi - lo) / 2;
        if (views_until(mid) >= X) hi = mid;
        else lo = mid + 1;
    }

    cout << lo << "\n";
    return 0;
}
