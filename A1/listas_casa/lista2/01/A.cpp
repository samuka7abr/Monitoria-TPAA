#include <bits/stdc++.h>
using namespace std;
#define otim ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main(){
	otim;
	int N; cin >> N;

	while(N--){
		unsigned long long X, Y;
		cin >> X >> Y;

		unsigned long long res = X ^ Y;

		cout << __builtin_popcountll(res) << "\n";
		
	}

	return 0;
}
