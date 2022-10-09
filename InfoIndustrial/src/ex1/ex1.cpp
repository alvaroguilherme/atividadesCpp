#include <iostream>

using namespace std;

int main()
{
    float peso,altura,resultado;

    cout << "Digite o peso: ";
    cin >> peso;
    cout << "Digite a altura: ";
    cin >> altura;
    resultado = peso/(altura*altura);
    cout << "IMC: " << resultado << endl;

    if(resultado < 18.5)
        cout << "Abaixo do peso!";
    else if(resultado >= 18.5 && resultado < 25)
        cout << "Peso normal!";
    else if(resultado >= 25 && resultado < 30)
        cout << "Acima do peso!";
    else if(resultado >= 30)
        cout << "Obeso!";
    
    system("pause");
    return 0;

}