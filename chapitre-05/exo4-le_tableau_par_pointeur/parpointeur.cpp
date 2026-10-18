#include<cstdio>
#include<cstring>

int somme(const int* t, int n){
    int s = 0;
    for(const int* tab = t; tab < t + n; tab++){
        s += *tab;
    }
    return s;
}

int maximum(const int* t, int n){
    int max = *t;
    for(const int* tab = t; tab < t + n; tab++){
        if(*tab > max){
            max = *tab;
        }
    }
    return max;
}

void inverser(int* t, int n){
    int* a = t;
    int* b = t + n - 1;
    while(a < b){
       int c = *a;
       *a = *b;
       *b = c;
       a++;
       b--;
    }
}

int longueur(const char* s){
    const char* t = s;
    while(*t != '\0'){
        t++;
    }
    return t - s;
}

int main(){
    int t[] = {12, 7, 19, 3, 15};
    int tab[] = {1, 2, 3, 4, 5};
    int s = somme(t, 5);
    int max = maximum(t, 5);
    int l;

    printf("somme = %d\n", s);
    printf("maximum = %d\n", max);
    inverser(tab, 5);
    for(int i = 0; i < 5; i++){
        printf("%d", tab[i]);
        printf(" ");
    }
    printf("\n");

    l = longueur("bonjour");
    printf("longueur de bonjour : %d , avec strlen : %d\n", l, (int)strlen("bonjour"));
     l = longueur("Yaoundé");
    printf("longueur de Yaoundé: %d , avec strlen : %d\n", l, (int)strlen("Yaoundé"));


    return 0;
}
