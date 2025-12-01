// Set e uma estrutura que representa um conjunto matematico
// de elementos. A diferenca entre um set e um vector e que
// o set nao permite elementos repetidos e nao possui ordem.

set<int> conj;

conj.insert(1);
conj.insert(1);

conj.erase(1);

if (conj.count(1))
{ // retorna 1 se tiver o elemento
  // faca algo
}

int x = conj.size();

conj.clear(); // limpa o set

// percorrer
set<int> conj;
// codigo que preenche o set

// iterator!
for (auto i = conj.begin(), i != conj.end(); i++)
{
    printf("%d\n", *i);
}