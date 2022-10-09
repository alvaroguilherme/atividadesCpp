#include <math.h>
float fatorial(float num)
{
    int res = 1;
    while (num > 1)
        res *= num--;
    return res;
}

float funcao(float x){
    float y = fatorial(5)*pow(x,3) + fatorial(4)*pow(x,2) + fatorial(3)*x + fatorial(2);
    return y;
}