/* Incremento e Decremento */

#include <iostream>

int main()

 {
	int num1{ 10 }, num2{ 20 }, Resultado;
	  
	std::cout << "Valor Atual dde Num1: " << num1 << " e " << "num2: " << num2 << "\n";
	num1 = num2++;

	std::cout << "Valor Atual de num1: " << num1 << " e " << "num2: " << num2 << "\n";
	num2 = ++num1;

	std::cout << "Valor Atual de num1: " << num1 << " e " << "num2: " << num2 << "\n";

	system("Pause");
}