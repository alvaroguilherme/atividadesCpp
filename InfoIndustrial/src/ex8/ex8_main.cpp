#include "robots.h"
#include <cstdlib>
#include <iostream>
#include <time.h>

void ExecutaMovimento(MobileRobot *ptr)
    {
        srand(time(0));
        double xvel = rand()%10;
        double yvel = rand()%10;
        double zvel = rand()%10;
        double tempo = rand()%10;
        std::cout << "Velocidades (m/s):" << std::endl;
        std::cout << "X: " << xvel << " Y: " << yvel << " Z: "<< zvel << std::endl;
        std::cout << "Tempo: " << tempo << "s" << std::endl;
        ptr->Mover(xvel,yvel,tempo,zvel);
    }

int main()
{
    RoboTerrestre rt;
    Quadrotor q;
    ExecutaMovimento(&rt);
    ExecutaMovimento(&q);

    return 0;
}