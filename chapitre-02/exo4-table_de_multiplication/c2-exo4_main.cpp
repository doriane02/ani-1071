#include<cstdio>

int main () {

    printf("  x ");
    for (int i = 1; i <= 10; i++) {
        printf("%4d", i);
    }

    printf("\n");
    printf(" ___________________________________________\n");

    for (int j = 1; j <= 10; j++) {
        printf("%4d", j);
        for (int k = 1; k <= 10; k++) {
            printf("%4d", j * k);
        }
        printf("\n");
    }

    return 0;
    
}