#include <bits/stdc++.h>
using namespace std;
#define otim ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*
 * Ideia de Resolução
 * enquanto N for diferente de 1, verifica o se módulo de n com 2 é 0 a zero. se sim, atribui n = n / 2
 * se não, n = 3 * n + 1
 * */
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
