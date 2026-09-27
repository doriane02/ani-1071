#include<cstdio>

int  main () {

    int nombre;
    int compt = 0;

     printf (" entrer un nombre: ");
     scanf(" %d", & nombre);

     while( nombre != 0) {

         nombre = nombre / 10;
        compt++;
     }



     printf (" ce nombre possede %d chiffres", compt);

return 0;    
    
}
