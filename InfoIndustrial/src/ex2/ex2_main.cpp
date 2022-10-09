#include <iostream>
#include "ex2.h"
#include <math.h>


using namespace std;

int main()
{
    cout<<"y(25): "<<funcao(25)<<endl;
    cout<<"y(7!): "<<funcao(fatorial(7))<<endl;
    cout<<"y(2.5³): "<<funcao(pow(2.5,3))<<endl;
    return 0;
}