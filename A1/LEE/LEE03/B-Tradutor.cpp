#include <bits/stdc++.h>
using namespace std;

bool fechamento(string X){
    stack<char> pilha;

    for(char ch : X){
        if(ch == '(' || ch == '[' || ch == '{'){
            pilha.push(ch);
        }
        else if(ch == ')' || ch == ']' || ch == '}'){
            if(pilha.empty()){
                return false;
            }
            char top = pilha.top();
            pilha.pop();
            if ((ch == ')' && top != '(') ||
                (ch == ']' && top != '[') ||
                (ch == '}' && top != '{')) {
                return false;
            }
        }
    }
    return pilha.empty();
}

int main(){
    string S;

    cin >> S;

    if(fechamento(S)){
        cout << "OK" << endl;
    }else{
        cout << "SyntaxError" << endl;
    }

    return 0;
}
