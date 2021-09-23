//
// Alocar memória
//

#include <iostream>
#include <stdlib.h>

int main(void)
{
    int *p = (int *) malloc(sizeof(int));
    if (p == NULL) {
        std::cout << "Malloc não funcionou" <<std::endl;
    }
    
    *p = 1000;
    std::cout << p << std::endl;
    
    return 0;
}