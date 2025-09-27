stack<int> pilha;

pilha.push(1);
pilha.push(2);
pilha.push(3);

int tamanho = pilha.size();
int topo = pilha.top();
pilha.pop();

while (!pilha.empty())
{
    int elemento = pilha.top();
    pilha.pop();
}
