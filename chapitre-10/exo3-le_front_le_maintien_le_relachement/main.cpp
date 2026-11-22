#include<iostream>

int main (){
    int n;
    int comptAv = 0;
    int comptAp = 0;
    int comptR = 0;
    
    std::cin>>n;
    
    for(int i = 0; i < n; i++){
        int maintenant;
        std::cin>>maintenant;
        std::cout<< i + 1<< " ";
        if (comptAv == 0 && maintenant == 1){
            std::cout << "APPUYE"<<"\n";
            comptAp++;
        } else if (comptAv == 1 && maintenant == 1){
            std::cout<<"MAINTENU"<<"\n";
        } else if (comptAv == 0 && maintenant == 0){
            std::cout<<"RELACHE"<<"\n";
            comptR++;
        } else {
            std::cout<<"RIEN"<<"\n";
        }
        
        comptAv = maintenant;
    }
    
    std::cout<<"APPUIS "<<comptAp<<"\n";
    std::cout<<"RELACHES " <<comptAp<<"\n";
    
    return 0;
    
}

