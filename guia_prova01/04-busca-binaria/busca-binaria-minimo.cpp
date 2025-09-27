// Valor minimo (Menor valor que torna check verdadeiro)

int l = a; // sei que a resposta nao e menos que a
int r = b; // sei que a resposta nao e mais que b (as vezes esse chute tem que ser bom, para evitar overflow)

while (r > l + 1)
{ // repita enquanto o intervalo tiver tamanho > 2
    int mid = (l + r) / 2;
    if (check(mid))
    {            // mid e valido
        r = mid; // como queremos minimizar a resposta, e mid e uma resposta valida
                 // descartamos tudo a direita de mid (mas nao mid)
    }
    else
    {
        l = mid + 1; // Se mid nao e valido, descartamos ele e tudo abaixo.
    }
}
// Ao final desse laco, a resposta pode estar em l ou r.
// Queremos minimizar a resposta, entao se l for valido,
// ficaremos com l, e caso contrario,  com r
int ans = r;
if (check(l))
{
    ans = l;
}