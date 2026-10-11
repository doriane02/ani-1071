#include<cstdio>

void tourner(int t[], int n, int k){
    if( n == 0){
        return;
    }
    k = k % n;
    if(k < 0){
        k = k + n;
        k = k % n;
    }
    int copie[1000];
    for(int i = 0; i < n; i ++){
        copie[i] = t[(i + k) % n];
    }
    for(int i = 0; i < n; i++){
        t[i] = copie[i];
    }
}

int main(){
    int n,k;
    int t[1000];

    scanf("%d %d", &n, &k);
    for(int i = 0; i < n; i++){
        scanf("%d", &t[i]);
    }
    tourner(t, n, k);
    for(int i = 0; i < n; i++){
        printf("%d\n", t[i]);
    }
    
    return 0;
}
