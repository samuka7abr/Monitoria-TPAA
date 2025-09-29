#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int P;
    cin >> P;

    deque<pair<int,int>> pilha;

    for(int i = 0; i < P; i++){
        int a, b;
        cin >> a >> b;
        pilha.emplace_back(a, b);
    }
    
    while(!pilha.empty()){
        auto [a, b] = pilha.front();
        pilha.pop_front();
        cout << a << " " << b << "\n";

        if(pilha.empty()) break;

        auto [c, d] = pilha.front();
        pilha.pop_front();
        if(c + d == 7){
            pilha.emplace_back(c, d);
        }
    }

    return 0;
}
