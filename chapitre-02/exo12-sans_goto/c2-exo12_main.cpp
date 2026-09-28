#include<cstdio>

int main () {

    int n;

    n = 1;
    while (n<=20) {
        if (n % 3 != 0 ){
             printf ("%d ", n);
        }

        n++;
    }
    

return 0;
}