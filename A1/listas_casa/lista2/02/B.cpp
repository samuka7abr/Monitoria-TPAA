#include <bits/stdc++.h>
using namespace std;
#define otim ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main(){
	otim;
	
	while(true){
		int N, solitario  = 0;;
		cin >> N;

		if(N == -1) break;
		
		while(N--){
			int num; cin >> num;
			solitario ^= num;
		}
		
		cout << solitario << "\n";
	}
	

	return 0;
}
