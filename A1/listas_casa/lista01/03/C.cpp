#include <bits/stdc++.h>
using namespace std;
#define otim ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pb push_back
using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
const int INF_INT = 1e9;
const ll INF_LL = 1e18; 
const int MOD = 1000000007;

string convertBase(ull n, int base){
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
    while (cin >> N >> B){
        if (N == -1 && B == -1) break;
        cout << convertBase((ull)N, B) << "\n";
    }
    return 0;
}

