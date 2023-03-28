#include <iostream>
#include "somaMatrizes.hpp"
#include "subtrairMatrizes.hpp"
using namespace std;

int main()
{
    char OperacaoDesejada;
    cout << "Qual tipo de operacao deseja escolher?" << endl
         << "< + - * >" << endl;
    cin >> OperacaoDesejada;

    if (OperacaoDesejada == '+')
        obterSomaDeDuasMatrizes();
    if(OperacaoDesejada == '-')
        ObterSubtracaoDeMatrizes();
    
}