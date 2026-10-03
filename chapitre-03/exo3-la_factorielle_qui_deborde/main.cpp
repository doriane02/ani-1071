#include<cstdio>

    unsigned int factorielle32(unsigned int n){
        if ( n == 0 || n == 1){
         return 1;       
        }
        unsigned int factorielle = 1;
        for(unsigned int i = 2; i <= n; i++){
        factorielle *= i;
         }
      return factorielle;
    }
    
    unsigned long long factorielle64(unsigned long long n){
         if ( n == 0 || n == 1){
        return 1;       
        } 
        unsigned long long factorielle = 1;
       for(unsigned long long i = 2; i <= n; i++){
       factorielle *= i;
    }
    return factorielle;  
    }
    
    int main (){
        unsigned int n;
        if (scanf ("%u", &n) == 1){
            printf("%u\n", factorielle32(n));
            printf("%llu\n", factorielle64(n));
        }

    return 0;
    }
    

