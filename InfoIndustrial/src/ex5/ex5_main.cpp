#include "ex5.h"

using namespace std;

int main()
{
    // Iniciando classes
    Robot r1(1);
    Robot r2(2);
    // Alterando velocidade
    r1.changeSpeed(2,1);
    r2.changeSpeed(2,2);
    // Vendo posições
    r1.showPos();
    r2.showPos();
    // Movendo robôs
    r1.move(1);
    r2.move(3);
    // Vendo novas posições
    r1.showPos();
    r2.showPos();
}