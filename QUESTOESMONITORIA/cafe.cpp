#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N; cin >> N;

	vector<int> C(N);

	for(int i = 0; i < N; i++){
		cin >> C[i];
	}

	sort(C.begin(), C.end());

	int P; cin >> P;

	while(P--){
		int Q; cin >> Q;

		int cnt = upper_bound(C.begin(), C.end(), Q) - C.begin();
		cout << cnt <<  "\n";
	}

	return 0;
}
