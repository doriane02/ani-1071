#include <iostream>
#include <string>
using std::string;

int main (){
    
    int n;
    bool modifie = false;
    bool fermee = false;
    int comptD = 0;
    int comptI = 0;
    
    std::cin>>n;
    for(int i = 0; i < n; i++){
        string ev;
        std::cin >> ev;
        if (ev == "MODIF"){
            std::cout << "modifie\n";
            modifie = true;
            } else if (ev == "SAUVE") {
               std::cout << "enregistre\n";
                modifie = false;
             } else if (ev == "FERMETURE") {
                comptD++;                       
                if (modifie) {
                     std::cout << "fermeture refusee\n";
                    } else {
                        std::cout << "fermeture acceptee\n";
                        fermee = true;
                        comptI = n - i - 1;       
                        break;                      
                    }
                }
            }

            std::cout << "DEMANDES " << comptD << "\n";
            std::cout << "IGNORES " << comptI << "\n";
            std::cout << "FERMEE " << (fermee ? "oui" : "non") << "\n";

            return 0;
        }
    
