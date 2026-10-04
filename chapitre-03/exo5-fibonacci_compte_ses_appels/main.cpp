#include<cstdio>

long long fibonacci(int n, long long& appels) {
    appels++;
    if (n == 0){
        return 0;
    }
    if (n == 1){
        return 1;
    }
    return fibonacci(n - 1, appels) + fibonacci(n - 2, appels);

}

int main () {
    int n;
    scanf("%d", &n);
    long long appels = 0;
    long long resultat = fibonacci(n, appels);
    printf("%lld\n%lld\n", resultat, appels);
    return 0;
}

