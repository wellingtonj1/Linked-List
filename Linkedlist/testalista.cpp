#include "testalista.h"

Testalista::Testalista()
{

}
void Testalista::menu()
{
    unsigned int escolha;
    Item *aux;
    bool ok;
    do
    {

        puts(" 1 - Inserir pessoa ");
        puts(" 2 - Deletar pessoa ");
        puts(" 3 - Procurar pessoa ");
        puts(" 4 - Para encerrar o programa ");
        printf(" Sua escolha [  ]\b\b\b");
        std::cin>>escolha;

        switch (escolha)
        {
            case 1:

                aux=criaitem();

                ok=bijeto.inserir(aux);
                if(ok)
                {
                    puts("Sucesso!");
                }
                else
                {
                    puts("Insucesso");
                }
                break;

            case 2:

                aux=criaitem();
                aux=bijeto.retirar(aux);
                if(aux)
                {
                    std::cout<<aux->getitem();
                }
                else
                {
                    puts("Insucesso!");
                }

                break;

            case 3:

                std::cout<<bijeto.getlista();

                break;

            case 4:

                puts("Encerrado com sucesso!!!");

                break;

            default:
                puts("Digite um numero valido!");
                break;
        }
    }while(escolha!=4);

}

Item* Testalista::criaitem()
{
    Item *x=new Item;
    std::string aux;
    std::cin.ignore();

    puts("Digite o nome da pessoa ");
    std::getline(std::cin,aux);
    x->setnome(aux);

    puts("Digite o telefone da pessoa ");
    std::getline(std::cin,aux);
    x->setfone(aux);


    return x;
}

