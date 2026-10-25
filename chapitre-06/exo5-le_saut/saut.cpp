#include<cstdio>
#include<cmath> 

const double g = 9.81;
const double h = 3.0;

struct Vec2 {
    double x;
    double y;
};

void eulerSemiImplicite(Vec2& p, Vec2& v, Vec2 a, double dt){
    v.x += a.x * dt;
    v.y += a.y * dt;
    p.x += v.x * dt;
    p.y += v.y * dt;
}

double simuler(double dt, double v0){
    Vec2 p = {0, 0};
    Vec2 v = {0, v0};
    Vec2 a = {0, -g};
    double hmax  = 0;

    while(p.y >= 0.0){
        eulerSemiImplicite(p, v, a, dt);
        if(p.y > hmax) hmax = p.y;
    }
    return hmax;
}

int main (){
    double v0 = sqrt(2.0 * g * h);
    double h1 = simuler(1.0 / 120 , v0);
    double h2 = simuler(1.0 / 30 , v0);
    double h3 = simuler(1.0 / 200 , v0);

    printf("vitesse initiale : %f\n", v0);
    printf ("avec dt = 1 / 120 : %f\n", h1);
    printf("avec dt = 1 / 30  : %f\n", h2);
    printf ("avec dt = 1 / 200 : %f\n", h3);

    return 0;
}


