#include <iostream>
#include "somaMatrizes.hpp"
#include "subtrairMatrizes.hpp"
#include "multiplicarMatrizes.hpp"
using namespace std;

int main()
{
    char OperacaoDesejada;
    cout << "Qual tipo de operacao deseja escolher?" << endl
         << "< + - * >" << endl;
    cin >> OperacaoDesejada;

    if (OperacaoDesejada == '+')
        obterSomaDeDuasMatrizes();
    else if(OperacaoDesejada == '-')
        obterSubtracaoDeMatrizes();
    else if(OperacaoDesejada == '*')
        obterMultiplicacaoDeMatrizes();

 system("pause");   
}