#include <iostream>
using namespace std;

// classe de carro
class Carro
{
    public:
    string brand;
    string model;
    int year;
};

int main()
{
    // criar 1° objeto do carro.
    Carro carroObjeto01;
    carroObjeto01.brand = "BMW";
    carroObjeto01.model = "X5";
    carroObjeto01.year = 1999;

    // criando 2° Objeto do carro.
    Carro carroObjeto02;
    carroObjeto02.brand = "Ford";
    carroObjeto02.model = "Mustang";
    carroObjeto02.year = 1969;

    cout << carroObjeto01.brand << " " << carroObjeto01.model << " " << carroObjeto01.year << "\n";
    cout << carroObjeto02.brand << " " << carroObjeto02.model << " " << carroObjeto02.year << "\n";

    return 0;
}