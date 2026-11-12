#include<iostream>
#include<string>

int valeur (const char* s) {
    if (strcmp(s, "DEBUG") == 0){return 0;}
    if (strcmp(s, "INFO") == 0){return 1;}
    if (strcmp(s, "WARN") == 0){return 2;}
    if (strcmp(s, "ERROR") == 0){return 3;}
    else { return -1;}   
}

int main () {
    char texte[10], niv[10], mot[10];
    int n;
    int affiche = 0, filtre = 0;
    
    std::cin>>texte;
    std::cin>>n;
    int seuil = valeur(texte);
    
    for(int i = 0; i < n; i++){
        std::cin>>niv>>mot;
        int v = valeur(niv);
        if(v != -1 && seuil != -1 && v >= seuil){
            std::cout<<niv<<" "<<mot<<"\n";
            affiche++;
        }  else {
            filtre++;
        }  
    }
    std::cout<<"AFFICHES "<<affiche<<"\n";
    std::cout<<"FILTRES "<<filtre<<"\n";
    
    return 0;   
}

