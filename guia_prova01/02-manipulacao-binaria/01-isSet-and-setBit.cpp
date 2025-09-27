bool isSet(int bitPosition, int number)
{
    bool ret = ((number & (1 << bitPosition)) != 0);
    return ret;
} //essa função 
//serve para verificar se o bit na posição `bitPosition` está "ligado" (=1)

bool setBit(int bitPosition, int number)
{
    return (number | (1 << bitPosition));
}
// essa função serve para ativar o bit na `bitPosition`
