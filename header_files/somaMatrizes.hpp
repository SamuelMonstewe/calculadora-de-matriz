#include <iostream>
#ifndef SOMAMATRIZES_H_INCLUDED
#define SOMAMATRIZES_H_INCLUDED
using namespace std;

void obterSomaDeDuasMatrizes()
{   
    int NumeroDeLinhas;
    int NumeroDeColunas;
    double Elemento;

    cout << "Defina a ordem das matrizes: " << endl;
    cin >> NumeroDeLinhas >> NumeroDeColunas;

    double Matriz1[NumeroDeLinhas][NumeroDeColunas];
    double Matriz2[NumeroDeLinhas][NumeroDeColunas];
    double MatrizResultado[NumeroDeLinhas][NumeroDeColunas];

    cout << "Preencha a primeira matriz: " << endl;

    for (int i = 0; i < NumeroDeLinhas; i++)
    {
        for(int j = 0; j < NumeroDeColunas; j++)
        {
            cout << "Digite o elemento a" << i << j << ":" << endl;
            cin >> Elemento;
            Matriz1[i][j] = Elemento;
        }
    }

    cout << "Preencha a segunda matriz: " << endl;

    for(int i = 0; i < NumeroDeLinhas; i++)
    {
        for(int j = 0; j < NumeroDeColunas; j++)
        {
            cout << "Digite o elemento a" << i << j << endl;
            cin >> Elemento;
            Matriz2[i][j] = Elemento;
        }
    }

    for(int i = 0; i < NumeroDeLinhas; i++)
    {
        for(int j = 0; j < NumeroDeColunas; j++)
        {
            MatrizResultado[i][j] = Matriz1[i][j] + Matriz2[i][j];
        }
    }
    cout << "Matriz resultante da soma: " << endl;
  
    for(int i = 0; i < NumeroDeLinhas; i++)
    {
        for(int j = 0; j < NumeroDeColunas; j++)
        {
            cout << MatrizResultado[i][j] << "\t";
        }

        cout << "\n";
    }
}
#endif