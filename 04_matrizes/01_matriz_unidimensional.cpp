// contar 10 filmes usando matriz unidimensional

#include <iostream>
using namespace std;

int main()
{
    string filmes[10] = {"filme01", "filme02", "filme03", "filme04", "filme05",
                        "filme06", "filme07", "filme08", "filme09", "filme10"};
    
    int i;
    for(i = 0; i < 10; i++) {
        cout << filmes[i] << "\n";
    }
    return 0;
}
