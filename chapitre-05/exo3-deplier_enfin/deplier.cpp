#include<cstdio>

void deplier(int i, int largeur, int& x, int& y){
    x = i % largeur;
    y = i / largeur;
}

void minMax(const int t[], int n, int& min, int& max){
    min = t[0];
    max = t[0];
    for(int i = 1; i < n; i++){
        if(t[i] < min){
            min = t[i];
        }
        if(t[i] > max){
            max = t[i];
        }
    }
}

bool diviser(int a, int b, int& quotient, int& reste){
    if(b == 0){
        return false;
    }
    quotient = a / b;
    reste = a % b;

    return true;
} 

int main(){
    int tab[]= {0, 25, 79, 80};
    int largeur = 40;
    printf("deplier :\n");
    for(int i = 0; i < 4; i++){
        int x = -1, y = -1;
        deplier(tab[i],largeur,x,y);
        printf("case %d colonne %d ligne %d\n", tab[i], x, y);
    }
    printf("\n");

    printf("min et max :\n");
    int t[] = {12, 7, 19, 3, 15};
    int  n = 5, min = 0, max = 0;
    minMax(t, n, min, max);
    printf("min = %d max = %d\n", min, max);

    printf("\n");

    printf("diviser :\n");
    int  quotient = 0, reste = 0;
    diviser(24, 5, quotient, reste);
    printf("a = 24 b = 5 quotient = %d reste = %d\n", quotient, reste);
    diviser(88, 14, quotient, reste);
    printf("a = 88 b = 14 quotient = %d reste = %d\n", quotient, reste);

    printf("\n");

    printf("par zero :\n");
    quotient = -1; reste = -1;
    printf("avant l'appel quotient = %d reste = %d\n", quotient, reste);
    bool etat = diviser(25, 0, quotient, reste);
    printf("valeur rendue = %d\n", etat);
    printf("apres l'appel quotient = %d reste = %d\n", quotient , reste);

    return 0;
}
