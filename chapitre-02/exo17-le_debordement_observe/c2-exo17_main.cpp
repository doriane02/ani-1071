#include<cstdio>

int main() {
    int x = 1;
    int compt = 0;
     
    while (x != 0){

        x *= 2;
        compt++;
        printf(" % d numero de tours %d\n", x, compt);
    
        if ( x < 0){
         printf( "x est devenu negatif au tour %d\n", compt);
    
         }
        if ( x == 0){
          printf(" x est devenu nul au tour %d\n", compt);
    
        }

    }

    return 0;


}