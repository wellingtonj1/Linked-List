#include "Item.h"

Item::Item()
{

}
void Item::setnome(std::string x)
{
    nome=x;
}

std::string Item::getnome()
{
    return nome;
}

void Item::setfone(std::string x)
{
    fone=x;
}

std::string Item::getfone()
{
    return fone;
}

std::string Item::getitem()
{
    return nome+"\n"+fone;
}

