#include <iostream>
using namespace std;

void obterDeterminanteDoisPorDois()
{
    double Matriz[2][2] = {0};
    double ResultadoMultiplicacaoDiagonalPrincipal = 1;
    double ResultadoMultiplicacaoDiagonalSecundaria = 1;
    double Determinante = 0;
    double Elemento;
    cout << "Preencha a matriz para fazermos o determinante: " << endl;

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            cout << "Digite o elemento A" << i << j << ": ";
            cin >> Elemento;
            Matriz[i][j] = Elemento;
        }
    }

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            if(i == j)
                ResultadoMultiplicacaoDiagonalPrincipal *= Matriz[i][j];
            else if(i + j == 1)
                ResultadoMultiplicacaoDiagonalSecundaria *= Matriz[i][j];
            
        }
    }
    Determinante = ResultadoMultiplicacaoDiagonalPrincipal - ResultadoMultiplicacaoDiagonalSecundaria;
    cout << "O resultado deste determinante e: " << Determinante << endl;
}