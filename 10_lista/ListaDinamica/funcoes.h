// lista

#include <iostream>
#include "declaracoes.h"
using namespace std;

bool listaCheia(){
    if(l->qtd == limite){
        cout << "Lista Cheia" << endl;
        return true;
    } else
    return false;
}   

bool listaVazia(){
    if(l->qtd == 0) {
        return true;
    } else   
    return false;
}

void imprimeLista(){
    if(listaVazia())
        return;
    else {
        produto *p = new Produto;
        p = l->primeiro;
        do{
            cout << "nome: " << p ->nome;
            cout << " - qtd: " << p->qtd;
            p = p->prox;
        }while(p != NULL);
    }
}
