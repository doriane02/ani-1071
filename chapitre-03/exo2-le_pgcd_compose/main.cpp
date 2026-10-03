#include<cstdio>

 long long pgcd(long long a, long long b){
    if (a < 0){
        a = -a;
    }
    if (b < 0){
        b = -b;
    }
    while (b !=  0 ){
        long long c = a % b;
        a = b;
        b = c;
    }
    return a;
}

 long long ppcm(long long a, long long b){
    if (a < 0){
        a = -a;
    }
    if (b < 0){
        b = -b;
    }
     if (a == 0 || b == 0){
        return 0;
    }
    return a / pgcd(a, b) * b;

    
}

int main () {
    long long a,b;
    bool aucun = true;
    while(scanf("%lld %lld", &a, &b) == 2){
        aucun = false;
        printf("%lld\n",pgcd(a,b) );
        printf("%lld\n",ppcm(a,b) );
      }

      if (aucun){
        printf("AUCUN\n");
      }
}


