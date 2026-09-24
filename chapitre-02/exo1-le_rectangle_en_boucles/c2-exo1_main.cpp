#include<cstdio>

int main(){

    int i,j;

      for ( i=0; i<7; i++ ){

        for( j=0; j<20; j++ ){

          if ( i==0 || i==6 || j==0 || j==19 ){
            printf("#");
          }else{
          printf(" ");  
          }
        }
        
        printf("\n");
      }

    return 0;  
}
