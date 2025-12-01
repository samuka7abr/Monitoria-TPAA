// Map e uma estrutura que representa um conjunto de pares de
// elementos, onde o primeiro elemento e a chave e o segundo e
// o valor associado a essa chave.

// meu mapa recebe chaves do tipo string e armazena valores inteiros
map<string, int> meu_mapa;
// o acesso e como o de um vetor, mas o indice tem o tipo da chave.

mapa["chave"] = 2;

cout << mapa["sei la"] << endl;
// Isso vai imprimir 0, as chaves que ainda nao tem valores sao inicializados
// com um valor base quando sao acessadas.

map<string, int> meu_mapa;
int x = meu_mapa["chave"];
int size = meu_mapa.size();

map<char, int> meu_mapa;
meu_mapa['c'] = 2;
if (meu_mapa.count('c'))
    puts("Meu mapa contem o char c");

map<char, int> meu_mapa;
meu_mapa['c'] = 2;
meu_mapa.erase('c');
if (mp.count('c'))
    puts("Meu mapa contem o char c");
else
    puts("Meu mapa nao contem o char c");

map<char, int> mp;

for (char i = 'd'; i < 'j'; i++)
{
    mp[i]++;
}

for (char i = 'a'; i < 'l'; i++)
{
    if (mp.count(i))
        printf("%c pertence\n", i);
    else
        printf("%c NAO pertence\n", i);
}
puts("");
mp.clear();

for (char i = 'a'; i < 'l'; i++)
{
    if (mp.count(i))
        printf("%c pertence\n", i);
    else
        printf("%c NAO pertence\n", i);
}

// Percorrer
map<int, int> mapa;

// iterator!
for (auto i = mapa.begin(), i != mapa.end(); i++)
{
    // Os *pares* chave valor do map funcionam como um pair (Duh!)

    printf("%d %d\n", (*i.first), (*i).second);
}