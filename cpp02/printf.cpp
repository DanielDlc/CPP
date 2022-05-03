// usando printf

#include <iostream>
#include<string>

int main()
{
	// { } é uma inicialização uniforme, permite tanto iniciar valores literais (int float, char)
	// permite também iniciar valores escalares (vetores, enums etc.)
	int NumeroInteiro{ 12 };
	float NumeroReal{ 98.76 };
	char Caractere{ 'd' };

	// String é uma cadeira de caracteres, é um texto e deve  estar entre aspas duplas "Texto teste"
	// Para declarar uma string usamos std::string
	std::string Texto{ "Minha primeira String" };
	
	// %d %f %c %s indica aquilo que vc quer colocar na string
	// %.2f define o número de casas decimal para exibir na tela
	// variavel.c_std() cham
	std::printf("Valor de um numero Inteiro = %d \n", NumeroInteiro);
	std::printf("Valor de um numero Real = %.2f \n", NumeroReal);
	std::printf("testando letra com char: %c \n", Caractere);
	std::printf("testando: %s \n", Texto.c_str()); 

	system("PAUSE");
	return 0;
}
