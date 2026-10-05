#include<cstdio>

void f(int n){
    int gros[1000];
    gros[0] = n;
    printf("%d\n",n +gros[0] - n);
    fflush(stdout);
    f(n +1);
}
int main (){
    f(1);
}
