vector<int> v; // declaracao de um vector;
v.push_back(9);
v.push_back(2);
int n = v.size();
vector<int>::iterator i = v.begin(); //i aponta para v[0];
i++; // i aponta para v[1];
//
// adicionar cin em vetores:
for(int i = 0; i < v.size(); i++){
	cin >> v[i]; //onde V é o seu vetor e i é a posição
}

sort(v.begin(),v.end()); // Ordenacao de v
// se quiser ordena-lo de tras para frente:
sort(v.end(), v.begin());

