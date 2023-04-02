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
    int MultiplicacaoPrimeiraParalelaPrincipal = 1;
    int MultiplicacaoSegundaParalelaPrincipal = 1;
    int SomaDasMultiplicacoesDiagonaisPrincipalEParalelas = 0;

    int MultiplicacaoDiagonalSecundaria = 1;
    int MultiplicacaoPrimeiraParalelaSecundaria = 1;
    int MultiplicacaoSegundaParalelaSecundaria = 1;
    int SomaDasMultiplicacoesDiagonaisSecundariasEParalelas = 0;

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
        for(int j = 3; j < 5;)
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
         cout <<  CalcularDeterminante[i][j] << "\t";   
       }
       cout << "\n";
   }

   cout << "-----------------------------------------------" << endl;

   for(int i = 0; i < 3; i++)
   {
       for(int j = 0; j < 5; j++)
       {
           if(i == j) 
               MultiplicacaoDiagonalPrincipal *= CalcularDeterminante[i][j];
           else if(j - i == 1)
               MultiplicacaoPrimeiraParalelaPrincipal *= CalcularDeterminante[i][j];
           else if(j - i == 2)
               MultiplicacaoSegundaParalelaPrincipal *= CalcularDeterminante[i][j];
       }    
   }

   SomaDasMultiplicacoesDiagonaisPrincipalEParalelas = MultiplicacaoDiagonalPrincipal + MultiplicacaoPrimeiraParalelaPrincipal + MultiplicacaoSegundaParalelaPrincipal;
    
   for(int i = 0; i < 3; i++)
   {
       for(int j = 0; j < 5; j++)
       {
           if(i + j == 2)
               MultiplicacaoDiagonalSecundaria *= CalcularDeterminante[i][j];
           else if(i + j == 3)
               MultiplicacaoPrimeiraParalelaSecundaria *= CalcularDeterminante[i][j];
           else if(i + j == 4)
               MultiplicacaoSegundaParalelaSecundaria *= CalcularDeterminante[i][j];
           
       }
   }
    
    SomaDasMultiplicacoesDiagonaisSecundariasEParalelas = MultiplicacaoDiagonalSecundaria + MultiplicacaoPrimeiraParalelaSecundaria + MultiplicacaoSegundaParalelaSecundaria;

    Determinante = SomaDasMultiplicacoesDiagonaisPrincipalEParalelas - SomaDasMultiplicacoesDiagonaisSecundariasEParalelas;
    cout << "Resultado: " << Determinante << endl;

}
