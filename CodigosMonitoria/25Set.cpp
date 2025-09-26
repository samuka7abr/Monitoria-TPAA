#include <bits/stdc++.h>
using namespace std;

int main(){
	 //BITWISE

	int a = 10; 
	int b = 5;

	cout << "a" << bitset<4>(a) << endl;
	cout << "b" << bitset<4>(b) << endl;
	
	int E = a & b; // só retorna 1 quando ambos os bits forem 1
	cout << bitset<4>(E) << endl; //caso de uso: verificação de bit 

	int OU = a | b; //retornar 1 quando pelo menos um dos dois for um
	cout << bitset<4>(E) << endl; //1111
	
	int XOR = a ^ b; //retorna 1 quando os bits forem diferentes
	cout << bitset<4>(XOR) << endl;

	int NOT = ~a; //inverte os bits
	cout << bitset<4>(NOT)  << endl;

	int SHIFT_L = a << 1; //dado um número N vc vai multiplicar por 2 e multiplicar por a;
	cout << bitset<4>(SHIFT_L) << endl;
	
	int SHIFT_R = a >> 1;  //divide por 2 (anula o shift left)
	cout << bitset<4>(SHIFT_R) <<  endl;
	

	//VETORES:


	vector<int> nome(a, 8); //vector<tipo> nome(tamanho, atribuição de espaços)
	
	cout << nome.size() << endl;  //quantos números
	cout << nome.capacity() << endl; //quantos números cabem

	nome.push_back(11); // adicionar o valor entre parenteses ao fim do vetor
	
	cout << nome.front() << endl; //pegar o primeiro valor
	cout << nome.back() << endl; //pega o último valor
	
	nome.pop_back(); //remove o último elemento (11) 
	sort(nome.end(), nome.begin()); //ordenação 

	for(int i = 0; i < nome.size(); i++){
		cout << nome[i] << " ";
	}

	//remoção de número específico
	
	vector<int> v = {10, 20, 30, 40, 50};
	int pos = 2;

	v.erase(v.begin() + pos); //remove o 30
	
	for(auto it = v.begin(); it != v.end(); ) {
		if(*it == 30){
			it = v.erase(it);
		}else{
			it++;
		}
	}
	
	


	//FILAS
	
	queue<int> q;

	q.push(1);
	q.push(2);

	cout << q.front() << endl;
	cout << q.back() << endl;

	q.pop();


	 //PILHAS
	
	stack<int> s;

	s.push(1);
	s.push(2);

	cout << s.top() << endl; //retorna 2
	//
	s.pop(); //remove o topo
	//novo topo seria 1


	



	//BUSCA
	//sequencial:
	auto it = find(v.begin(), v.end(), 30); //procura do  inicio ao fim  do vetor o key (terceiro  parametro)
	if( it != v.end()){
		cout << "achei" << endl;
	}else{
		cout << "nao achei" << endl;
	}



	//BINARIA

	bool found = binary_search(v.begin(), v.end(), 30);


	return 0;
}

int buscaBinaria(vector<int>&v, int alvo){
	int inicio = 0;
	int fim = v.size() - 1;

	while(inicio <= fim){
		//  int mid =  (inicio + fim) / 2
		int meio = inicio + (fim - inicio) / 2;

		if(v[meio] == alvo){
			return meio;
		} else if (v[meio] < alvo){
			inicio = meio + 1;
		} else{
			fim = meio - 1;
		}
	}

	return -1;
}
