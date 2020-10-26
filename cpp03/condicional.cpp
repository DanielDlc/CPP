#include <iostream>
#include <string>

int main()
{
	bool bFezSol, bMotoPronta, bSalarioDepositado;
	bool bAcesso;

	std::string SenhaDeAcesso = "cplusplus"; 
	std::string SenhaDigitada;

	std::cout << "Digite a senha de acesso: ";
	std::cin >> SenhaDigitada;

	/* Se a senha digitada pelo usuátio e armazenada na variável 
	SenhaDigitada for igual a senha de acesso as instruções após if
	serão executadas pois a condição foi verdadeira true 1*/
	if (SenhaDigitada == SenhaDeAcesso)
	{
		std::cout << "\n Acesso Permitido!" << "\n";
		bAcesso = true;
		system("PAUSE");
	}

	// Se a condição for falta então as intruções else serão executadas
	else
	{
		std::cout << "\n Acesso Negado!!! " << "\n";
		system("PAUSE");
		exit(0); //Sai do programa, força fechamento da aplicação 
	} 
}