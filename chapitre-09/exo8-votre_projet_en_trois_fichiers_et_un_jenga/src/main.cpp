#include <iostream>
#include <vec2.h>

int main() {
    ani::Vec2 a{3.0f, 4.0f};
    ani::Vec2 b{1.0f, 2.0f};

    ani::Vec2 s = ani::ajouter(a, b);
    std::cout << "somme : " << s.x << " " << s.y << "\n";
    std::cout << "produit scalaire : " << ani::produitScalaire(a, b) << "\n";
    std::cout << "longueur de a : " << ani::longueur(a) << "\n";
    return 0;
}
