#ifndef LISTAENCADEADA_H
#define LISTAENCADEADA_H
#include "No.h"

class Listaencadeada
{
    No *inicio,*final;
public:
    Listaencadeada();
    bool inserir(Item*);
    Item* retirar(Item*);
    Item* consultar(Item*);
    bool vazia()const;
    std::string getlista()const;
    void eliminarprimeiro();
    ~Listaencadeada();
};

#endif // LISTAENCADEADA_H
