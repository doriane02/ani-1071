#include <iostream>
#include <string>
#include <vector>
#include <map>

using std::string;
using std::vector;
using std::map;

int main() {
    int n = 0;
    std::cin >> n;

    vector<string> nom(n);
    vector<int> date(n);
    vector<bool> reconstruire(n, false);
    map<string, int> index;

    int nbReconstruire = 0;
    int nbAJour = 0;

    for (int i = 0; i < n; i++) {
        int k;
        std::cin >> nom[i] >> date[i] >> k;

        vector<string> deps(k);
        for (int j = 0; j < k; j++) {
            std::cin >> deps[j];
        }
        bool reco = (date[i] == -1);

        for (const string& d : deps) {
            auto it = index.find(d);
            if (it != index.end()) {
                int p = it->second;
                if (date[p] > date[i]) {
                    reco = true;
                }
               
                if (reconstruire[p]) {
                    reco = true;
                }
            }
        }

        reconstruire[i] = reco;
        index[nom[i]] = i;
    }

    for (int i = 0; i < n; i++) {
        if (reconstruire[i]) {
            std::cout << nom[i] << " A RECONSTRUIRE\n";
            nbReconstruire++;
        } else {
            std::cout << nom[i] << " A JOUR\n";
            nbAJour++;
        }
    }

    std::cout << "A RECONSTRUIRE " << nbReconstruire << "\n";
    std::cout << "A JOUR " << nbAJour << "\n";
    return 0;
}
