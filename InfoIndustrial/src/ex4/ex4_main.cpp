#include <iostream>
#include "ex4.h"

using namespace std;

int main()
{
    char nome[10];
    cout << "Digite o nome: ";
    cin >> nome;
    cout << "Nome invertido: ";
    inverteNome(nome);

    return 0;

}