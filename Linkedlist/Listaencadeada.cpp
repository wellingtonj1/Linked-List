#include "Listaencadeada.h"

Listaencadeada::Listaencadeada()
{
    inicio=final=0;
}
bool Listaencadeada::inserir(Item* x)
{
    if(x==0) return false;

    Item* busca=consultar(x);

    if(busca!=0) return false;

    No* z=No::montano(x);
    if(vazia())
    {
        inicio=final=z;
        return true;
    }
    final->Setproximo(z);
    final=z;
    return true;
}

Item* Listaencadeada::retirar(Item* x)
{
    if(x==0||vazia())return 0;

    No* p,*a;
    a=p=inicio;
    for( ; p!=0 && p->getdados()->getnome()!=x->getnome();a=p,p=p->getproximo());

    if(p==0) return 0;

    a->Setproximo(p->getproximo());
    p->Setproximo(0);

    Item* z=No::desmontano(p);
    return z;
}

Item* Listaencadeada::consultar(Item* aux)
{
    if(aux==0||vazia()) return 0;

    No *p;
    for(p=0 ;p!=0 && p->getdados()->getnome()!=aux->getnome(); p=p->getproximo());

    if(p==0) return 0;

    Item *x=new Item;
    *x=*p->getdados();

    return x;
}

bool Listaencadeada::vazia()const
{
    return (inicio==0);
}

std::string Listaencadeada::getlista()
{

}
