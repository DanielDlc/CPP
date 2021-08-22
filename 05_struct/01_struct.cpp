#include <iostream>


struct Funcionarios
{
    std::string Nome;
    int Idade;
    std::string Profissao;
};

int main() 
{
    Funcionarios Estagiario;
    Estagiario.Nome = "Marcos";
    Estagiario.Idade = 38;
    Estagiario.Profissao = "Analista de Sistemas";
    std::cout << "\nNome: " << Estagiario.Nome << " \nIdade: " << Estagiario.Idade << " \nProfissao: " << Estagiario.Profissao;

    return 0;
}