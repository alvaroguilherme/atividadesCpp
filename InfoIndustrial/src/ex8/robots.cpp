#include "robots.h"
#include <iostream>

using namespace std;

// Construtores
RoboTerrestre::RoboTerrestre()
{
    this->setPosicaoAtual(0,0,0);
}

Quadrotor::Quadrotor()
{
    this->setPosicaoAtual(0,0,0);
}

// Sets
void MobileRobot::setPosicaoAtual(double x, double y, double z)
{
    this->PosicaoAtual[0] = x;
    this->PosicaoAtual[1] = y;
    this->PosicaoAtual[2] = z;
}

// Gets
double MobileRobot::getPosicaoAtual(char pos)
{
    if(pos=='x'){
        return this->PosicaoAtual[0];
    }
    if(pos=='y'){
        return this->PosicaoAtual[1];
    }
    if(pos=='z'){
        return this->PosicaoAtual[2];
    }
}

// Mover
void RoboTerrestre::Mover(double xvel, double yvel, double tempo, double zvel=0)
{
    cout << "Posicao atual: " << this->getPosicaoAtual('x') << " " << this->getPosicaoAtual('y') << " " << this->getPosicaoAtual('z') << endl;
    cout << "Acionando os motores da roda..." << endl;
    this->setPosicaoAtual(xvel*tempo,yvel*tempo,0);
    cout << "Nova Posicao: " << this->getPosicaoAtual('x') << " " << this->getPosicaoAtual('y') << " " << this->getPosicaoAtual('z') << endl;
}

void Quadrotor::Mover(double xvel, double yvel, double tempo, double zvel)
{
    cout << "Posicao atual: " << this->getPosicaoAtual('x') << " " << this->getPosicaoAtual('y') << " " << this->getPosicaoAtual('z') << endl;
    cout << "Acionando helices..." << endl;
    this->setPosicaoAtual(xvel*tempo,yvel*tempo,zvel*tempo);
    cout << "Nova Posicao: " << this->getPosicaoAtual('x') << " " << this->getPosicaoAtual('y') << " " << this->getPosicaoAtual('z') << endl;
}