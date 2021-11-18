/* 
Situação problema:
Faça um programa que cadastre 5 produtos. Para cada produto devem ser cadastrados 
código do produto, preço e quantidade estocada. Os dados devem ser armazenados em uma lista simplesmente encadeada e não ordenada. 
Posteriormente, receber do usuário a taxa de desconto (ex.: digitar 10 para taxa de desconto de 10%). 
Aplicar a taxa digitada ao preço de todos os produtos cadastrados e finalmente mostrar um relatório com o código e o novo preço. 
O final desse relatório deve apresentar também a quantidade de produtos com quantidade estocada superior a 500.
*/


#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

using namespace std;

struct Produto{
    int codigo;
    float preco;
    int qtde;
    struct Produto *prox;
};

typedef struct Produto Produto;

struct Lista{
    struct Produto *inicio;
    struct Produto *fim;
};
typedef struct Lista Lista;


Produto *aux;
Produto *anterior;

Lista* cria_lista(){
    Lista* li = (Lista*) malloc(sizeof(Lista));
    if(li != NULL){
        li->fim = NULL;
        li->inicio = NULL;
    }
    return li;
}

void insere_produto(Lista *li){

    Produto *novo =(Produto*) malloc(sizeof(Produto));

    cout <<"Inserir o codigo do produto: ";
    scanf("%d",&novo->codigo);

    cout <<"Informar o preco do produto: ";
    scanf("%f",&novo->preco);

    cout <<"Informar a quantidade do produto: ";
    scanf("%d",&novo->qtde);

    if(li->inicio == NULL){
        li->inicio = novo;
        li->fim = novo;
        li->fim->prox = NULL;
    }else{
        li->fim->prox = novo;
        li->fim = novo;
        li->fim->prox = NULL;
    }
    cout << "\nProduto inserido com sucesso!";
    getch();
}


void aplica_taxa(Lista *li, float taxa){
    if(li->inicio == NULL){
        printf("\nLista Vazia!!");
    }else{
        aux = li->inicio;
        do{
            aux->preco = aux->preco - aux->preco * (taxa/100);
            aux = aux->prox;
        }while(aux != NULL);
        printf("Taxa aplicada com sucesso!");
    }
    getch();
}

void imprime_relatorio(Lista *li){
    if(li->inicio == NULL){
        printf("\nLista Vazia!!");
    }else{
        int quantidade = 0;
        aux = li->inicio;
        printf("N\n");
        do{
            printf("\nCodigo do produto %d ", aux->codigo);
            printf("\nPreco do produto %.2f \n\n", aux->preco);
            if(aux->qtde > 500)
                quantidade++;
            aux = aux->prox;
        }while(aux != NULL);
        printf("\nQuantidade de produtos com quantidade estocada superior a 500: %d", quantidade);
    }
    getch();
}


void esvaziar_lista(Lista *li){
    if(li->inicio == NULL){
        printf("\nLista Vazia!!");
    }else{
        aux = li->inicio;
        do{
            li->inicio = li->inicio->prox;
            free(aux);
            aux = li->inicio;
        }while(aux != NULL);
        printf("\nLista Esvaziada!!");
    }
    getch();
}

int main()
{
    int i;
    float taxa;

    Lista *li = cria_lista();

    for(i = 1; i <= 5; i++){
        system("CLS");
        printf("Insira o produto numero %d\n", i);
        insere_produto(li);
    }

    system("CLS");

    printf("Insira a taxa de desconto: ");
    scanf("%f", &taxa);

    aplica_taxa(li, taxa);
    system("CLS");

    imprime_relatorio(li);

    esvaziar_lista(li);

    return 0;
}
