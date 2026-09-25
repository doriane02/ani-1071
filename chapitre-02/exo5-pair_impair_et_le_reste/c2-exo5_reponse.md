```
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


retun 0;

}
```
tests:
```
PS C:\Users\MEC\desktop> g++ c2-exo4_reponse.cpp -o version.exe
PS C:\Users\MEC\desktop> .\version.exe
 entrer un nombre:0
 le nombre est pair
 le nombre est nul
 divisible par 3
PS C:\Users\MEC\desktop> .\version.exe
 entrer un nombre:-9
 le nombre est impair
 le nombre est negatif
  divisible par 3
PS C:\Users\MEC\desktop> .\version.exe
 entrer un nombre:12
 le nombre est pair
le nombre est positif
  divisible par 3
PS C:\Users\MEC\desktop> .\version.exe
 entrer un nombre:7
 le nombre est impair
le nombre est positif
  pas divisible par 3
```


