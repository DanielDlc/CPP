#include <cstdlib>
#include <iostream>
#include"funcoes.h"
using namespace std;


int main(int argc, char** argv) {
    l = new Lista;
    l->primeiro = NULL;
    l->ultimo = NULL;
    l->qtd = 0;

    insereFim("Arroz", 1);
    insereFim("feijao", 3);
    insereFim("ovo", 12);
    imprimeLista();

    return 0;
}