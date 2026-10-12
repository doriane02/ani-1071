#include<cstdio>

int nombre(const char s[]){
    int n = 0;
    while(s[n] != '\0'){
        n++;
    }
    return n;
}

bool estPalindrome(const char s[]){
    int n = nombre(s);
    for(int i = 0; i < n / 2; i++){
        if( s[i] != s[n - i -1]){
            return false;
        }
    }
    return true;
}

void renverserTexte(char s[]){
    int n = nombre(s);
    for(int i = 0; i < n / 2; i++){
        char a = s[i];
        s[i] = s[n -i - 1];
        s[n - i -1] = a;
    }
    
}

int main(){
    char s[201];
    scanf("%200s", s);
    if(estPalindrome(s) == true){
        printf("oui\n");
    } else{
        printf("non\n");
    }
    renverserTexte(s);
    printf("%s\n", s);

    return 0;
}
