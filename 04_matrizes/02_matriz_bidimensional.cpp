#include <iostream>
using namespace std;

// matriz bidimensional
int main()
{
    // criando uma tabela com 3 linhas e 4 colunas
    int matriz[3][4];
    int i,j;

    matriz[0][0]=0;
    matriz[0][1]=0;
    matriz[0][2]=0;
    matriz[0][3]=0;

    matriz[1][0]=1;
    matriz[1][1]=1;
    matriz[1][2]=1;
    matriz[1][3]=1;

    matriz[2][0]=2;
    matriz[2][1]=2;
    matriz[2][2]=2;
    matriz[2][3]=2;

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 4; j++) {
            cout << matriz[i][j] <<" ";
        }
        cout << "\n";
    }
    return 0;
}