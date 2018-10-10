#include "No.h"

No::No()
{
    proximo=nullptr;
    dados=nullptr;
}
void No::Setproximo(No* x)
{
    proximo=x;
}

No* No::getproximo()const
{
    return proximo;
}
void No::setdados(Item* x)
{
    dados=x;
}

Item* No::getdados()const
{
    return dados;
}

No* No::montano(Item* aux)
{
    if(aux==nullptr)
        return 0;
    else
    {
        No* x=new No;
        x->Setproximo(0);
        x->setdados(aux);
        return x;
    }
}

Item* No::desmontano(No* aux)
{
    if(aux==0)
        return 0;
    else
    {
        Item* x=aux->getdados();
        delete aux;
        return x;
    }
}
