#include<iostream>
#include<string>
using std::string;

int main() {
    int n;
    std::cin>>n;
    int echec = 0, reussi = 0;
    for(int i = 1; i <=n; i++){
        string type;
        int attendu, obtenu;
        std::cin>>type>>attendu>>obtenu;
        bool ok = false;
        if(type == "EQUAL")    {ok = (attendu == obtenu);}
        else if (type == "NOT_EQUAL")     {ok = (attendu != obtenu);}
        else if (type == "LESS")     {ok = (attendu <  obtenu);}
        else if (type == "GREATER")   {ok = (attendu >  obtenu);}
        else if (type == "LESS_EQUAL")    {ok = (attendu <= obtenu);}
        else if (type == "GREATER_EQUAL") {ok = (attendu >= obtenu);}
        if (ok) {
            std::cout << "cas " << i << " OK\n";
            reussi++;
            } else {
                std::cout << "cas " << i << " ECHEC attendu " << attendu << " obtenu " << obtenu << "\n";
                echec++;
            }
        } 
        std::cout << "REUSSIS " << reussi << "\n";
        std::cout << "ECHOUES " << echec << "\n";
        if (echec == 0){
            std::cout << "VERDICT VERT\n";
        }else{
            std::cout << "VERDICT ROUGE\n";
            }
            
            
        return 0;
}
