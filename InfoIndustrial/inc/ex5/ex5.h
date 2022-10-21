#ifndef EX5_H
#define EX5_H

class Robot
{
private:
    int id;
public:
    Robot(int id);
    float pos[2];
    float speed[2];
    void showPos();
    void move(float t);
    void changeSpeed(float x,float y);
};

#endif 
