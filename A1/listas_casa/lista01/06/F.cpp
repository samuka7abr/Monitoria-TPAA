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

int main(){
    long long n;
    cin >> n;
    cout << n;
    while(n != 1){
        if(n % 2 == 0){
            n /=2;
        }
        else{
            n = 3 * n + 1;
        }
        cout << " " << n ;
    }

    
    return 0;
}
