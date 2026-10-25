#include<cstdio>

struct Vec2
{
    double x;
    double y;
};

struct Particule
{
    Vec2   position;
    Vec2   vitesse;
    double vie;
};

struct Particule2
{
    char etat;
    Vec2   position;
    double vie;
    Vec2   vitesse;
   
   
};



struct A { char c; int n; };
struct B { char c; double d; char e; };
struct C { double d; char c; char e; };

int main(){
    printf("la taille attendue pour Vec2 est 16 octets\n");
    printf("sa taille reelle : %zu octets\n", sizeof(Vec2));
    printf("la taille attendue pour Particule est 40 octets\n");
    printf("sa taille reelle : %zu octets\n", sizeof(Particule));
    printf("la taille attendue pour A est 5 octets\n");
    printf("sa taille reelle : %zu octets\n", sizeof(A));
    printf("la taille attendue pour B est 10 octets\n");
    printf("sa taille reelle : %zu octets\n", sizeof(B));
    printf("la taille attendue pour C est 10 octets\n");
    printf("sa taille reelle : %zu octets\n", sizeof(C));
    printf("la taille attentendue pour Particule2 est 41 octets\n");
    printf("sa taille reelle est : %zu", sizeof(Particule2));

    return 0;
}
