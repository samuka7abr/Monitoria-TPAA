// Dado um conjunto de n valores de moedas e pode considerar que ha infinitas
// moedas de cada valor. A partir de varias dessas moedas, devemos acumular um
// valor K, usando a menor quantidade de moedas possivel.

int n;
vector<int> valores;

int tabela[1005];

int dp(int k){
	if(k == 0){
		return 0;
	}
	if(tabela[k] != -1)
		return tabela[k];
	int melhor = 1e9; 
	for(int i = 0; i < n; i++){
		if(valores[i] <= k)
			melhor = min(melhor,1 + dp(k - valores[i]));
	}
	// aqui atribuimos e retornamos de uma vez so
	return tabela[k] = melhor;
}