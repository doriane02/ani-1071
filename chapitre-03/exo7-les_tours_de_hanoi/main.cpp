#include<cstdio>

long long compt;
void hanoi(int n, char depart, char arrivee, char intermediaire){
    if (n <= 0){
        return;
    }
    hanoi(n - 1, depart, intermediaire, arrivee);
    printf("%c>%c\n", depart,arrivee);
    compt++;
    hanoi(n - 1, intermediaire, arrivee, depart);
}

int main(){
    int n;
    scanf("%d", &n);
    hanoi(n,'A', 'C', 'B');
    printf("%lld\n",compt);
    
    return 0;
}
