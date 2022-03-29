// criando lista

#include <iostream>
using namespace std;

// 
struct Produto{
    int qtd;
    string nome;
};

struct Lista{
    int qtd;
    int primeiro;
    int ultimo;
};

Lista *l;
const int tamanho = 10;
