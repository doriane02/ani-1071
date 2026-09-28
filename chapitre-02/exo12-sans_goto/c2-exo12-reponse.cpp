#include<cstdio>

int main(){

    int n = 1;
encore:
    if (n % 3 == 0) goto suivant;
    printf("%d ", n);
suivant:
    n++;
    if (n <= 20) goto encore;

return 0;
}