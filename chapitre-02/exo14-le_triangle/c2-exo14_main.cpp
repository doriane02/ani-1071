#include<cstdio>

int main() {

  unsigned int h;
  
  printf(" entrer un entier positif non nul :");
  scanf("%d",&h);
  for ( int k=1; k<=h; k++){             // pour afficher chaque element de la ligne k

     for(int i= 1; i<= h-k; i++ ){      // pour centrer la ligne k
       printf(" ");
     }
      
     for(int j = 1; j <= 2 * k - 1; j++){ // pour afficher les etoiles
    printf("*");
     }
        printf("\n");
        

   }
    return 0;

}