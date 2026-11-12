#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string format;
    std::getline(std::cin, format);

    int k;
    std::cin >> k;
    std::vector<int> argument(k);
    for (int i = 0; i < k; i++) {
        std::cin >> argument[i];
    }

    std::string resultat = "";
    int comptr = 0, comptm = 0;

    for (size_t i = 0; i < format.size(); i++) {
        bool estMarque = (i + 2 < format.size()
                          && format[i] == '{'
                          && format[i + 1] >= '0' && format[i + 1] <= '9'
                          && format[i + 2] == '}');
        if (estMarque) {
            int num = format[i + 1] - '0';
            if (num < k) {
                resultat += std::to_string(argument[num]);
             comptr++;
            } else {
                resultat += format.substr(i, 3);
             comptm++;
            }
            i += 2;
        } else {
            resultat += format[i];
        }
    }

    std::cout << resultat << "\n";
    std::cout << "REMPLACES " << comptr << "\n";
    std::cout << "MANQUANTS " << comptm << "\n";
    return 0;
}
