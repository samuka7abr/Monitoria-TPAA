// Valor maximo (Maior valor que torna check verdadeiro)

int l = a;
int r = b;
while (r > l + 1)
{
    int mid = (l + r) / 2;
    if (check(mid))
    {            // mid e valido
        l = mid; // como queremos maximizar a resposta, e mid e uma resposta valida
                 // descartamos tudo a esquerda de mid (mas nao mid)
    }
    else
    {
        r = mid - 1; // Se mid nao e valido, descartamos ele e tudo acima.
    }
}
int ans = r;
if (check(l))
{
    ans = l;
}