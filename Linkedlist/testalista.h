#ifndef TESTALISTA_H
#define TESTALISTA_H
#include "Listaencadeada.h"

class Testalista
{
private:
    Listaencadeada bijeto;
public:
    Testalista();
    void menu();
    Item* criaitem();
};

#endif // TESTALISTA_H
