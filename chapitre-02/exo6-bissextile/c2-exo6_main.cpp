# include <cstdio>

int main () {

  int annee;

  printf (" entrer une annee :");
  scanf ("%d", &annee);

  if ( annee % 400 == 0 ){
   printf (" c'est une annee bissextile");
  } else if ( annee % 4 == 0 && annee % 100 != 0 ){
    printf (" c'est une annee bissextile");
  } else {
    printf (" ce n'est pas une annee bissextile");
  }


 return 0;
    
}
