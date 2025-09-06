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

int main() {
	int D;
	
	while (cin >> D && D != -1) { // loop não para enquanto estiver lendo D e ele for != de -1
		string N;
		cin >> N;
		int sum = 0;
		for (char c : N) {
            	sum += c - '0';	//subtração por '0' pois cada número em ASCII tem um valor específico
				// por ex: se c = '3', isso representaria em ASCII o valor 51
				// o valor '0', por sua vez, possui o valor 48
				// levando isso em consideração, c - '0' seria o mesmo que 51 - 48 = 3 
				// o resultado dessa subtração, (no caso, 3) é igual (em int) ao valor escrito em char c
        }
	cout << sum << " ";
        if (sum % 3 == 0){
        	cout << "sim";
        }else{
            cout << "nao";
	}
	cout << endl;
    }
	return 0;
}
