#include<cstdio>

long long trierParBulles(int t[], int n){
    long long comptes = 0;
    if(n <= 1){
       return comptes;
    }
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(t[j] > t[j + 1]){
                int c = t[j];
                t[j] = t[j +1];
                t[j + 1] = c;
                comptes++;
            }
        }
    }
    return comptes;
}

int main(){
    int n;
    int t[1000];
    long long comptes;

    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &t[i]);
    }

     comptes = trierParBulles(t, n);

    for(int i = 0; i < n; i++){
        printf("%d\n", t[i]);
    }
    printf("%lld\n", comptes);

    return 0;
}
