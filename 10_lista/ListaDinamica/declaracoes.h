// lista dinâmica declarando struct

#include <iostream>
using namespace std;

struct produto
{
    int qtd;
    string nome;
    produto *prox;
    Produto *ant;
};

struct lista
{
    int qtd;
    Produto *primeiro;
    Produto *ultimo;
};

Lista *l;
