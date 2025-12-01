vector<int> v; // declaracao de um vector;
v.push_back(9);
v.push_back(2);
int n = v.size();
vector<int>::iterator i = v.begin(); //i aponta para v[0];
i++; // i aponta para v[1];

sort(v.begin(),v.end()); // Ordenacao de v

