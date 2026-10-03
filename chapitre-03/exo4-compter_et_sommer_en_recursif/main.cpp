#include<cstdio>

int chiffresRecursif(int n){
    if (n < 0){
     n = -n;   
    }
    if (n < 10){
        return 1;
    }
    return 1 + chiffresRecursif(n / 10);
}

int sommeChiffresRecursif(int n){
    if (n < 0){
        n = -n;
    }
    if (n == 0){
        return 0;
    }
    return n % 10 + sommeChiffresRecursif(n / 10);
}

int main(){
  int n;
  bool aucun = true;
  while(scanf("%d", &n) == 1){
     aucun = false;
     printf("%d\n", chiffresRecursif(n));
     printf("%d\n", sommeChiffresRecursif(n));
  }
  if(aucun){
    printf("AUCUN\n");
  }
}
