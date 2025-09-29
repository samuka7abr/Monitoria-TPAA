#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    queue<string> norte, sul, leste, oeste;
    
    string token;
    string currentDirection;

    while(cin >> token && token != "0"){
        if(token[0] == 'B'){
            if(currentDirection == "N")
                norte.push(token);
            else if(currentDirection == "S")
                sul.push(token);
            else if(currentDirection == "L")
                leste.push(token);
            else if(currentDirection == "O")
                oeste.push(token);
        } else {
            currentDirection = token;
        }
    }
    
    bool first = true;
    while(!norte.empty() || !sul.empty() || !leste.empty() || !oeste.empty()){
        if(!norte.empty()){
            if(!first) cout << " ";
            cout << norte.front();
            norte.pop();
            first = false;
        }
        if(!sul.empty()){
            if(!first) cout << " ";
            cout << sul.front();
            sul.pop();
            first = false;
        }
        if(!leste.empty()){
            if(!first) cout << " ";
            cout << leste.front();
            leste.pop();
            first = false;
        }
        if(!oeste.empty()){
            if(!first) cout << " ";
            cout << oeste.front();
            oeste.pop();
            first = false;
        }
    }
    
    cout << "\n";
    return 0;
}
