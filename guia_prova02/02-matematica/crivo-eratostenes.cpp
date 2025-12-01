// Tabua para realizar consultas se um numero e primo ou nao
vector<int> primos_ate_n(int N)
{
    vector<int> marcacao(N, 1); // 1 = possivel primo, 0 = com certeza nao primo
    vector<int> primos;
    for (int x = 2; x < N; x++)
        if (marcacao[x] == 1)
        {
            primos.push_back(x);
            for (int m = x + x; m < N; m += x)
            {
                marcacao[m] = 0; // nao e primo
            }
        }
    return primos;
}