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

int M(int N){
    if(N > 100){
        return N - 10;
    }else{
        return M(M(N + 11));
    }
}

int main(){
    int C;
    cin >> C;

    for(int i =0 ; i < C; i++){
        int N;
        cin >> N;
        cout << M(N) << endl;
    }
    return 0;
}
