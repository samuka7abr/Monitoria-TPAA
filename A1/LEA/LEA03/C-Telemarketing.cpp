#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define otim ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 

int main(){
	otim
	ll C, K;
	cin >> C >> K;

	vector<ll> T(C);

	for(ll i = 0; i < C; i++) cin >> T[i];

	deque<ll> dq;

	for(ll i = 0; i < C; i++){
		dq.push_back(T[i]);

		ll limite = T[i] - K;

		while(!dq.empty() &&  dq.front() < limite){
			dq.pop_front();
		}

		if(i){
			cout << ' ';
		}
		cout << dq.size();
	}

	cout << '\n';

	return 0;
}
