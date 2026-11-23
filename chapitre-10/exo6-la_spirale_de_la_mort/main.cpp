#include<iostream>

int main () {
    long long pas, plafond;
    int n;
    long long seauA = 0, seauS = 0, totalA = 0, totalS = 0;
    int comptP = 0;
    
    std::cin>>pas>>plafond>>n;
    for(int i = 0; i < n; i++){
        long long duree;
        std::cin >> duree;
        long long dureeA = duree;
        if(duree > plafond){
            dureeA = plafond;
            comptP++;
        }
        seauA += dureeA;
        seauS += duree;
        int pasA = 0, pasS = 0;
        while(seauA >= pas ){
            seauA -= pas;
            pasA++;
        }
        while (seauS >= pas){
            seauS -= pas;
            pasS++;
        }
        
        totalA += pasA;
        totalS += pasS;
        std::cout<< i + 1<< " "<<pasA<<" "<<pasS<<"\n";
    }
    
    std::cout<<"AVEC "<<totalA<<"\n";
    std::cout<<"SANS "<<totalS<<"\n";
    std::cout<<"PLAFONNAGES "<<comptP<<"\n";
    std::cout<<"DETTE "<<seauS<<"\n";
    
    return 0;
} 
