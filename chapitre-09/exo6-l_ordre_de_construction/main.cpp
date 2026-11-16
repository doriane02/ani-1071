#include<iostream>
#include <string>
#include <vector>
#include <map>

using std::string;
using std::vector;
using std::map;

int main () {
    int n = 0;
    std::cin>> n;
    vector<string> nom (n);
    vector<vector<string>> deps(n);
    map<string, int> index;
    
    for (int i = 0; i < n; i++){
        int k;
        std::cin >> nom[i] >> k; 
        deps[i].resize(k);
        for(int j = 0; j < k; j++){
            std::cin >> deps[i][j];
        }
        index [nom[i]] = i;
    }
    
    vector<bool> construit (n, false);
    vector<string>ordre;
    
    while((int)ordre.size() < n) {
        int choix = -1;
        
        for(int i = 0; i < n; i++){
            if(construit[i]){continue;}
            bool pret = true;
            for(const string& d: deps[i]){
                auto it = index.find(d);
                if(it != index.end() && !construit [it -> second]){
                    pret = false;
                    break;
                }
            }
            if (pret){
                choix = i;
                break;
            }
        }
        if (choix == -1){
            std::cout<<"CYCLE"<<"\n";
            std::cout<<"PROJETS 0"<<"\n";
            return 0;
        }
        
        construit[choix] = true;
        ordre.push_back(nom[choix]);

    }
    for(const string& nom : ordre){
        std::cout<<nom<<"\n";
    }
    std::cout<<"PROJETS "<<ordre.size()<<"\n";
    
return 0; 
}
