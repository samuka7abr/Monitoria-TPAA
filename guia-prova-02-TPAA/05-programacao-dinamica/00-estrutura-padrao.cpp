
// podem ser varios argumentos, mas quase sempre todos sao inteiros

// vamos colocar tamanhos na nossa tabela
// que comportem o que precisemos, se arg1 vai no maximo ate 1000 e arg2 ate 200, 
//podemos ter dimensoes de 1005 e 205 por exemplo
int tabela[1005][205];

int dp(int arg1,int arg2){
	// checa casos base, ou seja, 
	// os casos que sabemos responder sem recorrencia
	if(caso base da recorrencia)
		return resposta;
	
	// checa se a funcao ja foi chamada com exatamente os mesmos argumentos
	// se ja foi, entao so retorna o valor salvo na tabela
	if(tabela[arg1][arg2] != -1){
		return tabela[arg1][arg2];
	}
	
	// Nao e um caso base, entao temos que 
	// fazer a recorrencia para computar a resposta
	// essa parte geralmente e a mais complexa

	// salva a resposta na tabela

	// retorna resposta
}