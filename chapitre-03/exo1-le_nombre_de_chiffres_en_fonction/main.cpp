#include<cstdio>

int nombreDeChiffres(int n) {
    if (n == 0) {return 1;
    }
    long long a = n;
    if  (a < 0) {a = -a;
    }
    int compt = 0;
    while ( a > 0) {
        a = a / 10;
        compt++;
    }
    return compt;
}

int main() {

    int n;
    bool aucun = true;


      while(scanf("%d", &n) == 1){
        aucun = false;
        printf("%d\n", nombreDeChiffres(n));
      }

      if (aucun){
        printf("AUCUN\n");
      }

return 0;      
}
