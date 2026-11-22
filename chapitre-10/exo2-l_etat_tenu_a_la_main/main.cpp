#include<iostream>
#include<set>
#include<string>
using std::string;
using std::set;

int main (){
    int n;
    int comptO = 0;
    std::cin>>n;
    set<string> comptE;
    for (int i = 0; i < n; i++){
        string ev;
        std::cin>>ev;
        if(ev == "BAS"){
            string touche;
            std::cin>> touche;
            comptE.insert(touche);
        } else if(ev == "HAUT"){
             string touche;std::cin>>touche;
             comptE.erase(touche);
         }  else if(ev == "QUESTION") {
             string touche;
             std::cin>>touche;
             std::cout<<(comptE.count(touche) ? "oui" : "non")<<"\n";
         } else if (ev == "FOCUS_PERDU") {
             comptO += comptE.size();
             comptE.clear();
         }
    }
     std::cout<< "ENFONCEES "<<comptE.size() <<"\n";
     std::cout<< "OUBLIS "<<comptO<<"\n";
    
    return 0;
}
