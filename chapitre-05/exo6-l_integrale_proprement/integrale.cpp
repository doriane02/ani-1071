#include<cstdio>
#include<cmath>

using Fonction = double (*)(double);

double integrale(Fonction f, double a, double b){
    double pas = (b - a) / 1000;
    double aire = 0;
    for(int i = 0; i < 1000; i++){
        aire += f(a + i * pas) * pas;
    }

    return aire;
}

double carre(double x){
    return x * x;
}

double derivee(Fonction f, double x){
    double h = 1e-6;
    return (f(x + h) - f(x - h)) / (2 * h);
}

double zero(Fonction f, double a, double b){
    while(b - a > 1e-6) {
        double c = (a + b) /2;
        if(f(a) * f(c) <= 0){
            b = c;
        } else{
            a = c;
        }

    }return (a +b) / 2;
}

double g(double x){
    return x * x - 2;
}

int main(){
    double PI = 3.14159;
     double z =  zero(g,1, 2);
    double racine = sqrt(2);

    printf("aire sous sin : %f\n", integrale(sin, 0, PI));
    printf("aire sous carre : %f\n", integrale(carre, 0, 1));
    printf("derivee de sin en 0 : %.1f\n", derivee(sin, 0));
    printf("le zero de la fonction g = x*x - 2 : %f , son ecart avec sqrt(2) : %.1f\n", z, fabs (z - racine) );

     return 0;
}
