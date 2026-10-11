#include<cstdio>

 void cribler(bool premier[], int n){
    premier[0] = false;
    premier[1] = false;
    for(int i = 2; i <= n; i++){
        premier[i] = true;
    }
    for(long long i = 2; i * i <= n; i++){
        if (premier[i] == true){
            for(long long j = i * i; j <= n; j += i){
                premier[j] = false;
            }
        } 
    }
 }

 int main(){
    int n;
    scanf("%d", &n);
    if(n < 2){
        printf("AUCUN\n");
        return 0;
    }
    bool premier[100000];
    cribler(premier,n);
    for(int i = 2; i <= n; i++){
        if (premier[i] == true){
            printf("%d\n", i);
        }
    }

    return 0;

 }
