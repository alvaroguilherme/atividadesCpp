#include <iostream>
#include "banco.h"
using namespace std;

int main()
{
    Banco b1(7);
    Conta var;
    b1.cadastroClientes();
    //b1.atendimento();
    b1.removeClientes(var);
    //b1.atendimento();
    cout << "A conta removida foi:" <<endl;
    var.exibeDados();
    return 0;
}