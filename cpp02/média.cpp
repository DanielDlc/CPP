//Média de três números

#include <iostream>

int main()
{
    float num01, num02, num03;
    float media {0.0};

    std::cout << " Digite o primeiro número: " << std::endl;
    std::cin >> num01;

    std::cout << " Digite o segundo número: " << std::endl;
    std::cin >> num02;

    std::cout << " Digite o terceiro número: " << std::endl;
    std::cin >> num03;

    media = (num01 + num02 + num03) / 3;

    std::cout << "Números Digitados: " << num01 << " " << num02 << " " << num03 << "\n";
    std::cout << "Média dos Números: " << (num01 + num02 + num03) / 3 <<std::endl;

    return 0;
}
