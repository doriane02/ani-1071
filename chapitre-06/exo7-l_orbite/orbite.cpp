#include<cstdio>
#include<cmath>

const double MU = 100;
const int H = 20, L = 40;
 const int n = 10000;
char image[H][L];

struct Vec2{
    double x;
    double y;
};

Vec2 t1[n + 1];
Vec2 t2[n + 1];

Vec2 a (Vec2 p){
    double l = sqrt(p.x * p.x + p.y * p.y);
    return {-(MU * p.x) / (l * l * l), -(MU * p.y) / (l * l * l)};
}

void eulerExplicite(Vec2& p, Vec2& v, Vec2 a, double dt){
p.x += v.x * dt;
p.y += v.y * dt;
v.x += a.x * dt;
v.y += a.y * dt;
}

void eulerSemiImplicite(Vec2& p, Vec2& v, Vec2 a, double dt){
    v.x += a.x * dt;
    v.y += a.y * dt;
    p.x += v.x * dt;
    p.y += v.y * dt;
}

double longueur(Vec2 p){
    return sqrt(p.x * p.x + p.y * p.y);
}

void effacer(char c = ' ')
{
    for (int y = 0; y < H; y++)
        for (int x = 0; x < L; x++)
            image[y][x] = c;
}

void point(int x, int y, char c = '#')
{
    if (x < 0 || x >= L || y < 0 || y >= H) return;   // hors de la grille : rien
    image[y][x] = c;
}

void afficher()
{
    for (int y = 0; y < H; y++)
    {
        for (int x = 0; x < L; x++) printf("%c", image[y][x]);
        printf("\n");
    }
}

void simuler(double dt){
    Vec2 p1 = {100, 0};
    Vec2 v1 = {0, 1};
    Vec2 p2 = {100, 0}; 
    Vec2 v2 = {0, 1};
    t1[0] = p1;
    t2[0] = p2;
    for(int i = 1; i <= n; i++){
        eulerExplicite(p1, v1, a(p1), dt);
        t1[i] = p1;
        eulerSemiImplicite(p2, v2, a(p2), dt);
        t2[i] = p2;
       
    }
}

int main(){
    double dt = 0.5;
    simuler(dt);
    printf("resultats:\n");
    for(int i = 500; i <= n; i+=500){
        printf("i = %d, distance : %f(explicite), %f (semi-implicite)\n", i, longueur(t1[i]), longueur(t2[i]));
    }
    printf("\n");

    double rmax = 0;
    for(int i = 0; i <= n; i++){
        if(longueur(t1[i]) > rmax){
            rmax = longueur(t1[i]);
        }
        if(longueur(t2[i]) > rmax){
            rmax = longueur(t2[i]);
        }
    }

     effacer();

    double echelle = 8.0 / rmax;
    for(int i = 0; i <= n; i++){
        point(20 + (int)round(t1[i].x * echelle * 2), 10 - (int)round(t1[i].y * echelle),'e');
        point(20 + (int)round(t2[i].x * echelle * 2), 10 - (int)round(t2[i].y * echelle),'s');
    }

    printf("Dessin: \n");
    afficher();

    simuler(dt / 10);
    printf("Pas dix fois plus petit : dt = %g, explicite %f, semi-implicite %f\n", dt / 10, longueur(t1[n]), longueur(t2[n]));

    return 0;
}
