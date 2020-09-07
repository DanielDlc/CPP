#include <iostream>
#include <cmath>

using namespace std;

int main()
{   // Lógica x = a + b² / c
	float a, b, c, x;

	cout << "Digite o primeiro valor de A: ";
	cin >> a;
	cout << "Digite o valor de b : ";
	cin >> b;
	cout << "Digite o valor de c: ";
	cin >> c;
	x = a + pow(b,2) / c;
	cout << "O valor da equacao de x foi: " << x << endl;
	system("PAUSE");
	return 0;
}