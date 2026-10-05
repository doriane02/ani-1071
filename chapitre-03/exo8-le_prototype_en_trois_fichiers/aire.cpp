#include "aire.h"

double PI = 3.14159265358979;

double aireRectangle( double longueur, double largeur){
    return longueur * largeur;
}
double aireDisque( double rayon){
    return rayon * rayon * PI;
}
double aireTriangle( double base, double hauteur){
    return base * hauteur / 2;
}

