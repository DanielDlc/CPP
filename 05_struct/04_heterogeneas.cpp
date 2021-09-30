// estruturas Heterogêneas
// São um conjunto de dados criados com tipos diferentes.
// Quando ciramos uma struc, podemos organizar um conjunto de dados e agrupar em um único campo.
// abaixo, escrevo um pequeno script para mostrar como podemos utilizar para agrupar 

#include <iostream>
#include <string>


// aqui podemos declarar o tipo de struct chamado aluno 
struct Estrutura_Aluno
{
    std::string nome;
    int idade;
    float cr;
};


int main() 
{
    Estrutura_Aluno Aluno;
    Aluno.nome = "Daniel";
    Aluno.idade = 37;
    Aluno.cr = 9.2;

    std::cout << "\nexemplo de string com nome do aluno: " << Aluno.nome 
                 << "\ncom tipo inteiro e informando a idade: " << Aluno.idade 
                 << "\ne float com o cr atual: " << Aluno.cr << std::endl;

    return 0;
}