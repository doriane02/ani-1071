voici le resultat obtenu après compilation de notre programme
```
####################
#                  #
#                  #
#                  #
#                  #
#                  #
####################
```
Ce programme contient 14 lignes, soit 3 de plus que celui de demo2.
Le programme pour obtenir un rectangle de 12 lignes et 40 colonnes
```
#include<cstdio>

int main(){

      for (int i=0; i<20; i++ ){

        for( int j=0; j<40 ; j++ ){

          if ( i==0 || i==19 || j==0 || j== 39 ){
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
On constate que le programme qui produit ce rectangle de 20 lignes et 40 colonnes possède également 14 lignes, Or un programme avec le meme rendu final sans qu'on utilise de boucles comporterait au moins 22 lignes

