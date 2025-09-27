queue<int> fila;

fila.push(1);
fila.push(2);

int t = fila.size();
int proximo = fila.front();
fila.pop();
while (!fila.empty())
{
    int proximo = fila.front();
    fila.pop();
}