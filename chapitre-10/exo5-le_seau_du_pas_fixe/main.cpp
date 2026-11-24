#include <iostream>

int main()
{
    int  pas;
    int n;
    int  seau = 0;
    int  Total = 0;
    
    std::cin >> pas >> n;

    for (int i = 0; i < n; i++)
    {
        int  duree;
        std::cin >> duree;

        seau += duree;

        int pasImage = 0;
        if (pas > 0)
        {
            while (seau >= pas)
            {
                seau -= pas;
                pasImage++;
            }
        }

        Total += pasImage;
        std::cout << i + 1 << " " << pasImage << " " << seau << "\n";
    }

    std::cout << "PAS TOTAL " << Total << "\n";
    std::cout << "RESTE FINAL " << seau << "\n";

    return 0;
}
