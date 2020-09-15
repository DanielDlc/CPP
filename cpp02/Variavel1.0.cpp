// 14 de setembro de 2020
// Daniel Louro Costa

#include <iostream>
#include <tchar.h>

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese")); // configurar o console para exibir acento de palavras

	// Declaração de variáveis
	// Primeiro colocar o tipo de variável, neste caso escolhemos int (também podemos executar como: int NumVidas, Pontuacao; na mesma linha.
	/* quando atribuimos uma variável, pedimos ao computador um local na memória RAM com o tamanho suficiente para armazenar
	um número inteiro (int) e colocar nome deste local como (NumVidas e Pontuacao) observe que a variável não deve ser acentuada.*/
	int NumVidas = 5; // Indicando que o programa irá alocar um local um espaço memória so tipo inteiro e colocar o valor 5   
	int Pontuacao = 1350; // Indicando que o programa irá alocar um local um espaço memória so tipo inteiro e colocar o valor 1350
	
	std::cout << "*********INICIO DO JOGO*********" << std::endl;
	std::cout << "Vidas Jogador: " << NumVidas << std::endl;
	std::cout << "Pontuação: " << Pontuacao << std::endl;
	std::cout << "********************************" << std::endl;

	std::cout << "Tamanho da Variável Numvidas " << sizeof(NumVidas) << "Bytes" << std::endl; // sizeof mostra o tamanhõ em bytes da variável.
	std::cout << "Tamanho da Variável Pontuacao " << sizeof(Pontuacao) << "Bytes" << std::endl;

	std::cout << "Endereço que Numvidas Ocupa na Memória RAM: " << &NumVidas << "\n";  // & antes da variável mostra o local ocupado na memória.
	std::cout << "Endereço que Pontuação Ocupa na memória Ram: " << &Pontuacao << "\n"; 
	std::cout << "********************************" << std::endl;

	std::cout << "*********DURANTE O JOGO*********" << std::endl;

	// Irá acrescentar um valor na região de memória rotulada como Pontuação (Pontuação = Pontuação + 150) 
	// Irá decrescer um valor na região de memória rotulada como NumVidas (NumVidas = Numvidas - 1)
	Pontuacao += 150; //Pontuação = (1350 - 150)
	NumVidas -= 1; // NumVidas = (5 - 1)
	std::cout << "Vidas Jogador: " << NumVidas << std::endl;
	std::cout << "Pontuação: " << Pontuacao << std::endl;
	std::cout << "********************************" << std::endl;

	return 0;
}
