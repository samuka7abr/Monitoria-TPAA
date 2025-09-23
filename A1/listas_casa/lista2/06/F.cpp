#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;

    for(int i = 0 ; i < T ; i++){
        long long A, B;
        long long Y;
        cin >> A >> B;
        cin >> Y;

        long long D = A | B;

        if((D & (~Y)) != 0){
            cout << -1 << endl;
        }else{
            long long C = Y ^ D;
            cout << C << endl;
        }
    }
    

    return 0;
}
