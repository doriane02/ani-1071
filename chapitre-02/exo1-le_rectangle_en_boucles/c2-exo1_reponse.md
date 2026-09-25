voici le resultat obtenu après compilation de notre programme
```

PS C:\Users\MEC\desktop> g++ c2-exo1.cpp -o exo1.exe
PS C:\Users\MEC\desktop> .\exo1.exe
####################
#                  #
#                  #
#                  #
#                  #
#                  #
####################

```
Ce programme contient 14 lignes, tandis que celui de demo 2 en avait 11.
Le programme pour obtenir un rectangle de 12 lignes et 40 colonnes
```
#include<cstdio>

int main(){

      for (int  i=0; i<12; i++ ){

        for( int j=0; j<40; j++ ){

          if ( i==0 || i==11 || j==0 || j==39 ){
            printf("#");
          }else{
          printf(" ");  
          }
        }
        
        printf("\n");
      }

    return 0;  
}
```
et produit ce rectangle
```
PS C:\Users\MEC\desktop>  g++ c2-exo1.cpp -o exo.exe
PS C:\Users\MEC\desktop> .\exo.exe
########################################
#                                      #
#                                      #
#                                      #
#                                      #
#                                      #
#                                      #
#                                      #
#                                      #
#                                      #
#                                      #
########################################
```
On constate que le programme qui produit ce rectangle de 20 lignes et 40 colonnes possède également 14 lignes, Or un programme avec le meme rendu final sans qu'on utilise de boucles comporte 25 lignes

