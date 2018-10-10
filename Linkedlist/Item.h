#ifndef ITEM_H
#define ITEM_H
#include <iostream>

class Item
{
private:
    std::string nome,fone;
public:
    Item();
    void setnome(std::string);
    std::string getnome();
    std::string getfone();
    void setfone(std::string);
    std::string getitem();
};

#endif // ITEM_H
