#include<cstdio>

int main(){

    int x,y,h;

     for(int y = 0; y < 8; y++){

        for(int h = 0;h < 2; h++){

            for(int x = 0;x < 8;x++){

                printf("%s", (x+y) % 2 ? "    " : "####");
            }

            printf("\n");
        }
     }

       
return 0;

}