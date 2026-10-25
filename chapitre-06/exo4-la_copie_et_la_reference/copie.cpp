#include<cstdio>
#include<cmath>

struct Vec2
{
    double x;
    double y;
};

void bougerCopie(Vec2 p){
    p.x += 1;
    return;
}

void bougerRef(Vec2& p){
    p.x += 1;
    return;
}

double longueurRef(const Vec2& p){
    /*p.x = 0;*/
    return sqrt(p.x * p.x + p.y * p.y);
}

int main(){

    Vec2 A = {2, -4};
    double l;
    printf(" avant l'appel de bougerCopie: A.x = %.1f A.y = %.1f\n", A.x, A.y);
    bougerCopie(A);
    printf("apres l'appel de bougerCopie : A.x = %.1f A.y = %.1f\n", A.x, A.y);
    
    printf("Avant l'appel de bougerRef: A.x = %.1f A.y = %.1f\n", A.x, A.y);
    bougerRef(A);
    printf("Apres l'appel de bougerRef : A.x = %.1f A.y = %.1f\n", A.x, A.y);

    l = longueurRef(A);
    printf("La longueur de A est %.1f", l);

    return 0;
}
