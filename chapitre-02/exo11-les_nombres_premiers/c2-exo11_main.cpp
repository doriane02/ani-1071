#include<cstdio>
#include<cmath>

int main() {


  bool premier ;
  int i ,j;

    printf(" les nombres premiers entre 1 et 100 sont :\n");

    for (i = 2; i < 100; i++) {
        premier = true;

        for (j = 2; j <= sqrt(i); j++) {

            if( i % j == 0){
                premier = false;
                break;
            }
         }

         if ( premier == true){
         printf(" %d\n",i);
         }

         

     } 

 return 0;

} 