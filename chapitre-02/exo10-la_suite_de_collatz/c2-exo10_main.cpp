#include<cstdio>

int main() {

    int n;
    int compt = 0;
     
    printf(" entrer un nombre entier :");
    scanf("%d", &n);

    while ( n != 1){
        printf(" %d ->", n);
        if ( n % 2 == 0){
         n = n / 2;  
        } else {
            n =  3 * n + 1 ;
        }
     compt++;
    }
    printf("\n");
    printf( " le nombre d'etapes est :%d", compt);

return 0;

}