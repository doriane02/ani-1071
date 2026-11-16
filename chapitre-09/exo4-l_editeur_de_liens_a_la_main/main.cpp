#include <iostream>
#include <string>
#include <vector>
#include <set>
using std::string;
using std::vector;
using std::set;
struct Fichier {
    string nom;
    vector<string> defNom;    
    vector<int> defStatic;    
    vector<string> useNom;    
};
int main() {
    int n;
    std::cin >> n;
    vector<Fichier> f(n);

    for (int i = 0; i < n; i++) {
        int nbDef, nbUse;
        std::cin >> f[i].nom >> nbDef;
        for (int j = 0; j < nbDef; j++) {
            string nom;
            int st;
            std::cin >> nom >> st;
            f[i].defNom.push_back(nom);
            f[i].defStatic.push_back(st);
        }
        std::cin >> nbUse;
        for (int j = 0; j < nbUse; j++) {
            string nom;
            std::cin >> nom;
            f[i].useNom.push_back(nom);
        }
    }
    set<string> dejaIndef;
    int nbIndef = 0;

    for (int i = 0; i < n; i++) {
        for (const string& s : f[i].useNom) {
            if (dejaIndef.count(s)) continue;

            bool trouve = false;
            for (int k = 0; k < n; k++)
                for (size_t m = 0; m < f[k].defNom.size(); m++)
                    if (f[k].defNom[m] == s)
                        if (f[k].defStatic[m] == 0 || k == i)
                            trouve = true;

            if (!trouve) {
                std::cout << "INDEFINI " << s << "\n";
                dejaIndef.insert(s);
                nbIndef++;
            }
        }
    }
    set<string> dejaDouble;
    int nbDouble = 0;

    for (int i = 0; i < n; i++) {
        for (size_t j = 0; j < f[i].defNom.size(); j++) {
            if (f[i].defStatic[j] == 1) continue;   // on ignore les static
            const string& s = f[i].defNom[j];
            if (dejaDouble.count(s)) continue;

            int compte = 0;
            for (int k = 0; k < n; k++)
                for (size_t m = 0; m < f[k].defNom.size(); m++)
                    if (f[k].defStatic[m] == 0 && f[k].defNom[m] == s)
                        compte++;

            if (compte >= 2) {
                std::cout << "DOUBLE " << s << "\n";
                dejaDouble.insert(s);
                nbDouble++;
            }
        }
    }
    std::cout << "INDEFINIS " << nbIndef << "\n";
    std::cout << "DOUBLES " << nbDouble << "\n";
    if (nbIndef == 0 && nbDouble == 0)
        std::cout << "VERDICT LIE\n";
    else
        std::cout << "VERDICT ECHEC\n";

    return 0;
}
