#include <iostream>
#include "somaMatrizes.hpp"
#include "subtrairMatrizes.hpp"
#include "multiplicarMatrizes.hpp"
#include "calcularDeterminante.hpp"
using namespace std;

int main()
{
    char OperacaoDesejada;
    char DeterminanteEscolhido;
    cout << "Qual tipo de operacao deseja escolher?" << endl
         << "< +, -, *, d(determinante)>" << endl;
    cin >> OperacaoDesejada;

    if (OperacaoDesejada == '+')
        obterSomaDeDuasMatrizes();
    else if(OperacaoDesejada == '-')
        obterSubtracaoDeMatrizes();
    else if(OperacaoDesejada == '*')
        obterMultiplicacaoDeMatrizes();
    else if(OperacaoDesejada == 'd')
    {
       cout << "Qual o tipo de determinante voce quer? <2 para 2x2; 3 para 3x3> " << endl;
       cin >> DeterminanteEscolhido;
       if(DeterminanteEscolhido == '2')
         obterDeterminanteDoisPorDois(); 
       else if(DeterminanteEscolhido == '3')
         obterDeterminanteTresPorTres();
    }
        

 system("pause");   
}