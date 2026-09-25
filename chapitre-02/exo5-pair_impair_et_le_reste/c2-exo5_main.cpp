#include <cstdio>
int main () {

    int x;

      printf (" entrer un nombre:");
      scanf ("%d",&x );

      if ( x % 2 == 0){
        printf (" le nombre est pair");
      }else {
        printf (" le nombre est impair");
      }

      if ( x > 0){
        printf ("le nombre est positif ");
      } else if ( x < 0){
        printf (" le nombre est négatif ");
      } else{
        printf(" le nombre est nul");
      }

    if ( x % 3 == 0){
        printf (" divisible par 3");
    } else {
        printf(" pas divisible par 3");
    }


return 0;

}
