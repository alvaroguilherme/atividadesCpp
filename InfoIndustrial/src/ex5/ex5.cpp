#include "ex5.h"
#include <iostream>
#include <unistd.h>

using namespace std;

Robot::Robot(int id){
    this->id = id;
    this->pos[0] = 0;
    this->pos[1] = 0;
}

void Robot::showPos(){
    cout << "Robo " << this->id << endl;
    cout << "Posicao X: " << this->pos[0] << endl;
    cout << "Posicao Y: " << this->pos[1] << endl;
}

void Robot::move(float t){
    this->pos[0] = this->speed[0]*t;
    this->pos[1] = this->speed[1]*t;
    cout << "Movendo o robo " << this->id << endl;
    //sleep(t);
}

void Robot::changeSpeed(float speed_x, float speed_y){
    this->speed[0] = speed_x;
    this->speed[1] = speed_y;
}