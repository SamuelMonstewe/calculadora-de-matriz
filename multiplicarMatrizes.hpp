#include <iostream>
#ifndef MULTIPLICARMATRIZES_H_INCLUDED
#define MULTIPLICARMATRIZES_H_INCLUDED
using namespace std;

void obterMultiplicacaoDeMatrizes()
{
    int NumeroLinhasMatriz1;
    int NumeroColunasMatriz1;
    int NumeroLinhasMatriz2;
    int NumeroColunasMatriz2;
    double Elemento;

    cout << "Digite a ordem da primeira matriz: " << endl;
    cin >> NumeroLinhasMatriz1 >> NumeroColunasMatriz1;
    cout << "Digite a ordem da segunda matriz: " << endl;
    cin >> NumeroLinhasMatriz2 >> NumeroColunasMatriz2;

    double Matriz1[NumeroLinhasMatriz1][NumeroColunasMatriz1];
    double Matriz2[NumeroLinhasMatriz2][NumeroLinhasMatriz2];

    if(NumeroColunasMatriz1 == NumeroLinhasMatriz2)
    {   cout << "preencha a primeira matriz: " << endl;
        for(int i = 0; i < NumeroLinhasMatriz1; i++)
        {
            for(int j = 0; j < NumeroColunasMatriz1; j++)
            {
                cout << "digite o elemento A" << i << j << endl;
                cin >> Elemento;
                Matriz1[i][j] = Elemento;
            }
        }

        cout << "preencha a segunda matriz: " << endl;

        for(int i = 0; i < NumeroLinhasMatriz2; i++)
        {
            for(int j = 0; j < NumeroColunasMatriz2; j++)
            {
                cout << "digite o elemento A" << i << j << endl;
                cin >> Elemento;
                Matriz2[i][j] = Elemento;          
            }
        }
    }
}
#endif