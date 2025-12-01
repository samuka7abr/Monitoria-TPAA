// Dado um vetor v de N elementos, e pedido o tamanho da maior subsequencia(ou
// seja, apagando elementos em quaisquer posicoes) desse vetor que e totalmente
// crescente. Por exemplo, a maior subsequencia crescente de [2, 5, 3, 1, 4, 6]
// e [2, 3, 4, 6]. 4 e a resposta, pois normalmente e solicitado o tamanho

int v[MAXN], N;
int calculado[MAXN];
int tabela[MAXN];

int f(int i){ // consideramos que o i e sempre pego nesta chamada
	if(calculado[i]) return tabela[i];

	int ans = 1; // como pegamos o elemento i, a resposta comeca com 1

	for(int j = i+1; j < N; j++){
		// se podemos continuar a sequencia apartir do j pegamos a resposta dele
		// e somamos 1(para considerar o elemento i)
		if(v[i] < v[j])
			ans = max(ans, f(j) + 1);
	}

	calculado[i] = 1;
	tabela[i] = ans;

	return ans;
}