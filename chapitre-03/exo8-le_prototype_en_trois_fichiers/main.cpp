#include<cstdio>
#include "aire.h"

int main (){

    double longueur, hauteur, rayon; 
     
    scanf("%lf %lf %lf", &longueur, &hauteur, &rayon);
    printf("%.4f\n", aireRectangle(longueur, hauteur));
    printf("%.4f\n", aireDisque(rayon));
    printf("%.4f", aireTriangle(longueur, hauteur));

    return 0;
}
