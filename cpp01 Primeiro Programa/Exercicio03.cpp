// Modificar as cores do programa

#include <iostream>

 int main()
 {
	 /* Cores e letras disponíveis:
	 0 = Preto						8 = Cinza							
	 1 = Azul						9 = Azul claro
	 3 = Verde-água					        A = Verde claro
	 4 = Vermelho					        B = Verde-água claro			F = Branco brilhante
	 5 = Roxo						C = Vermelho claro
	 6 = Amarelo					        D = Lilás
	 7 = Branco					        E = Amarelo claro */

	 // de 0 até F, o 1° modifica o fundo e o segundo modifica a letra.
	 system("COLOR 4E"); // color 4 (Fundo Lilás), seguido de E (Letra amarela)

	 std::cout << "Vamos modificar as cores deste programa " << std::endl;
	 
         return 0;
 }
