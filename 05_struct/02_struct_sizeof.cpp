//
// ter a saída a quantidade total de bytes do tipo int + int + double = 12
//

#include <iostream>
#include <stdlib.h>

struct x
{
    int a;
    int b;
    double c;
};


int main(void)
{
    struct x esctrutura;
        
    std::cout << "----------------------" <<std::endl;
    std::cout << sizeof(esctrutura) <<std::endl;
    std::cout << "----------------------" <<std::endl;

    return 0;
}

