#include<cstdio>

void echangerParValeur(int a, int b){
    int c = a;
    a = b;
    b = c;

}

void echangerParReference( int& a, int& b){
    int c = a;
    a = b;
    b = c;
}

int main (){
    int a, b;
    scanf("%d %d", &a, &b);
    echangerParValeur(a, b);
    printf("%d\n%d\n", a, b);
    echangerParReference(a, b);
    printf("%d\n%d\n", a, b);

    return 0;
}
