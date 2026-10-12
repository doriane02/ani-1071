#include<cstdio>

void transposer(const int source[], int lignes, int colonnes, int destination[]){
    for(int y = 0; y < lignes; y++){
        for(int x = 0; x < colonnes; x++){
            destination[x * lignes + y] = source[y * colonnes + x];
        }
    }
}

int main(){
    int lignes, colonnes;
    int source[10000];
    int destination[10000];

    scanf("%d %d", &lignes, &colonnes);
    for(int i = 0; i < lignes * colonnes; i++){
        scanf("%d", &source[i]);
    }
    transposer(source, lignes, colonnes, destination);
    
    for(int y = 0; y < colonnes; y++){
        for(int x = 0; x < lignes; x++){
            if(x > 0){
            printf(" ");
            }
            printf("%d", destination[y * lignes + x]);
        }
        printf("\n");
    }
    
    return 0;
}

