#include <iostream>
using namespace std;

void obterDeterminanteDoisPorDois()
{
    int Matriz[2][2] = {0};
    int ResultadoMultiplicacaoDiagonalPrincipal = 1;
    int ResultadoMultiplicacaoDiagonalSecundaria = 1;
    int Determinante = 0;
    int Elemento;
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
void obterDeterminanteTresPorTres()
{
    int MatrizDeEntrada[3][3];
    int DuasPrimeirasColunas[3][2];
    int MultiplicacaoDiagonalPrincipal = 1;
    int CalcularDeterminante[3][5];
    int Elemento;
    int Determinante = 0;
    cout << "Preencha a matriz para calcularmos o determinante: " << endl;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << "Digite o elemento A" << i << j << ": " << endl;  
            cin >> Elemento;
            MatrizDeEntrada[i][j] = Elemento;  
        }
    }

  

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            DuasPrimeirasColunas[i][j] = MatrizDeEntrada[i][j]; 
        }    
    }



    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            CalcularDeterminante[i][j] = MatrizDeEntrada[i][j];
        }
    }

    for(int i = 0; i < 3; i++)
    {
        for(int j = 3; j < 5; j++)
        {
            for(int k = 0; k < 2; k++)
            {
                CalcularDeterminante[i][j] = DuasPrimeirasColunas[i][k];
                j++;
            }
        }
    }

   for(int i = 0; i < 3; i++)
   {
       for(int j = 0; j < 5; j++)
       {
         cout <<  CalcularDeterminante[i][j] << "\t";   //erro   
       }
       cout << "\n";
   }

}
