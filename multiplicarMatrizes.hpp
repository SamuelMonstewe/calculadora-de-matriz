#include <iostream>
#ifndef MULTIPLICARMATRIZES_H_INCLUDED
#define MULTIPLICARMATRIZES_H_INCLUDED

void obterMultiplicacaoDeMatrizes()
{
    int NumeroLinhasMatriz1;
    int NumeroColunasMatriz1;
    int NumeroLinhasMatriz2;
    int NumeroColunasMatriz2;

    cout << "Digite a ordem da primeira matriz: " << endl;
    cin >> NumeroLinhasMatriz1 >> NumeroColunasMatriz1;
    cout << "Digite a ordem da segunda matriz: " << endl;
    cin >> NumeroLinhasMatriz2 >> NumeroColunasMatriz2;

    double Matriz1[NumeroLinhasMatriz1][NumeroColunasMatriz1];
    double Matriz2[NumeroLinhasMatriz2][NumeroLinhasMatriz2];
}
#endif