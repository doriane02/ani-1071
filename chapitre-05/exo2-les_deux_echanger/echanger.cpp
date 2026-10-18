#include<cstdio>

void echanger(int* a, int* b){
    int c = *a;
    *a = *b;
    *b = c;
}

void echanger(int& a, int& b){
    int c = a;
    a = b;
    b = c;
}

void echangerDouble(double& a, double& b){
    double c = a;
    a = b;
    b = c;
}

void echangerChar(char& a, char& b){
    char c = a;
    a = b;
    b = c;
}

int main(){

    int x = 1;
    int y = 2;
    double i = 1.1;
    double j = 2.2;
    char t = 'a';
    char z = 'b';

    echanger(&x, &y);
    printf("x = %d y = %d\n", x, y);

    echanger(x, y);
    printf("x = %d y = %d\n", x, y);

    echangerDouble(i, j);
    printf("i = %.1f j = %.1f\n", i, j);

    echangerChar(t,z);
    printf("t = %c z = %c\n", t, z);

    return 0;
}
