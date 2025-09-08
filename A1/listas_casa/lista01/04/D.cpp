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

bool ehPrimo(int p) {
    if (p < 2) return false;

    for (int i = 2; i <= sqrt(p); i++) {
        if (p % i == 0)
            return false;
    }
    return true;
}

int main(){
    otim
    int n;
    cin >> n;

    int i = 0, p;
    while(i < n){
        cin >> p;
        if(ehPrimo(p)){
            cout << "o numero " << p << " eh primo" << endl;  
        }else{
            cout << "o numero " << p << " nao eh primo" << endl;
        }
        i++;
    }
    return 0;
}
