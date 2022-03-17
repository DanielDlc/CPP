// matriz bidimensional utilizando for

#include <iostream>
using namespace std;

// matriz bidimensional
int main()
{
    int matriz[3][4];
    int i,j;

    // adicionando valores na matriz
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 4; j++) {
            matriz[i][j] = i;
        }
    }

    // iteração para percorrer a matriz
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 4; j++) {
            cout << matriz[i][j] <<" ";
        }
        cout << "\n";
    }
    return 0;
}
