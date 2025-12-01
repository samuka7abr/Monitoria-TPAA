// Fila de prioridades de maximo
priority_queue<int, vector<int>> pq;

// Fila de prioridades de minimo
priority_queue<int, vector<int>, greater<int>> pq_min;

pq_min.push(4);
pq_min.push(3);

while (!pq.empty())
{
    auto elem = pq.top();
    cout << elem.first << " " << elem.second << endl;
    pq.pop();
}