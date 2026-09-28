#include<cstdio>

int main () {

    int a, b, c;
    int compt = 0;
    printf(" entrer deux nombres :");
    scanf("%d %d", &a, &b);

    if ( a <b){
         c = a;
        a = b;
        b = c;
    }

    while( a != b){
        c = a - b;
        if ( c >= b){
            a = c;  
        }else{
            a = b;
            b = c;
        }
        compt++;

    }
    printf(" le pgcd de ces deux nombres est %d", a);
    printf("le nombres de tours est %d", compt);
    return 0;

}