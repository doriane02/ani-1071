#include<iostream>

int main (){
    int pas,n;
    int position = 0;
    int comptD = 0;
    int comptI = 0;
    
    std::cin>>pas>>n;
    
    for (int i = 0; i < n; i++){
        int gauche, droite;
        std::cin>>gauche >>droite;
        int axe = droite - gauche;
        int mouvement = axe * pas;
        position += mouvement;
        comptD += (mouvement < 0) ? -mouvement : mouvement;
        if (axe == 0){ comptI++ ;}
        std::cout<<axe<<" "<<position<<"\n";
    }
    
    std::cout<<"DEPLACEMENT "<<comptD<<"\n";
    std::cout<<"IMMOBILE "<<comptI<<"\n";
    
    return 0;
}