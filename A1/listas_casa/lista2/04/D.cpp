#include <bits/stdc++.h>
using namespace std;
#define otim ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main(){
	otim;
	int N, B;
	cin >> N >> B;
	

	for(int i = 0; i < N; i++){
		unsigned long long V;
		cin >> V;

		unsigned long long res = V | (1ULL << B);

		cout << res << "\n";
	}
	return 0;
}
