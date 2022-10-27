#ifndef ROBOTS_H
#define ROBOTS_H

class MobileRobot
{
    private:
    double PosicaoAtual[3];
    public:
    double getPosicaoAtual(char pos);
    void setPosicaoAtual(double x, double y, double z);
    virtual void Mover(double x, double y, double tempo, double z) = 0; 
};

class RoboTerrestre : public MobileRobot
{
    public:
    RoboTerrestre();
    void Mover(double x, double y, double tempo, double z);
};

class Quadrotor : public MobileRobot
{
    public:
    Quadrotor();
    void Mover(double x, double y, double tempo, double z);
    
};

#endif