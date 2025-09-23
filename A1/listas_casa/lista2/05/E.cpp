#include <bits/stdc++.h>
using namespace std;
#define otim ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

bool ehPrimo(int x) {
	if (x < 2) return false;
	for (int i = 2; i <= sqrt(x); i++) {
		if (x % i == 0)
		return false;
    	}
    	return true;
}

int main(){
	otim;
	int N; cin >> N;

	for(int i = 0; i < N; i ++){
		long long num; cin >> num;

		long long temp = num;

		int count = 0;

		while(temp){
			count += (temp & 1);
			temp >>= 1;
		}

		if(ehPrimo(count)){
			cout << num << " eh um pribit\n";
		}else{
			cout << num << " nao eh um pribit\n";
		}
		
	}
	return 0;
}
