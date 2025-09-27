vector<int> v;
v.push_back(1);
v.push_back(3);
v.push_back(5);
v.push_back(7);
v.push_back(9);
// procure pelo primeiro elemento maior que 3 nesse vetor
auto u = upper_bound(v.begin(),v.end(),3);
// para nao termos que escrever 
// vector<int>::iterator, vamos usar auto

//*u = 5(o primeiro elemento maior que 3 e 5)

u = lower_bound(v.begin(),v.end(),3);

//*u = 3(o primeiro elemento maior ou igual a 3 e 3).
