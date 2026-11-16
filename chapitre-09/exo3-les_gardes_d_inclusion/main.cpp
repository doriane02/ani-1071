#include <iostream>
#include <string>
#include <vector>
#include <map>

std::map<std::string, int> numero;
std::vector<std::string> noms;
std::vector<int> garde;
std::vector<std::vector<std::string>> inclus;
std::vector<int> sans, avec;
std::vector<bool> dejaVu;

void visiteSans(int f) {
    for (const std::string &nom : inclus[f]) {
        int g = numero[nom];
        sans[g]++;
        visiteSans(g);
    }
}

void visiteAvec(int f) {
    for (const std::string &nom : inclus[f]) {
        int g = numero[nom];
        if (garde[g] == 1 && dejaVu[g]) {
            continue;
        }
        dejaVu[g] = true;
        avec[g]++;
        visiteAvec(g);
    }
}

int main() {
    int n;
    std::cin >> n;
    noms.resize(n);
    garde.resize(n);
    inclus.resize(n);
    sans.assign(n, 0);
    avec.assign(n, 0);
    dejaVu.assign(n, false);

    for (int i = 0; i < n; i++) {
        int k;
        std::cin >> noms[i] >> garde[i] >> k;
        numero[noms[i]] = i;
        inclus[i].resize(k);
        for (int j = 0; j < k; j++) {
            std::cin >> inclus[i][j];
        }
    }

    visiteSans(0);
    visiteAvec(0);

    int totalSans = 0, totalAvec = 0;
    for (int i = 1; i < n; i++) {
        std::cout << noms[i] << " " << sans[i] << " " << avec[i] << "\n";
        totalSans+= sans[i];
        totalAvec += avec[i];
    }
    std::cout << "TOTAL SANS " << totalSans << "\n";
    std::cout << "TOTAL AVEC " << totalAvec << "\n";
    return 0;
}
