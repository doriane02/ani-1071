#include <iostream>

struct Vec2
{
    double x, y;
};

class Entite {
    protected:
    Vec2 position;
    const char* nom;

    public:
    Entite (Vec2 p, const char* n) : position(p), nom(n) {}
};

class Ennemi : public Entite {
    public:
    Ennemi (Vec2 p, const char* n, int d) : Entite(p, n), degats(d) {}

     void modifierposition(double x, double y) {
        position.x = x;
        position.y = y;
        }

    private:
    int degats;
};

class Joueur : public Entite { 
    public:
    Joueur (Vec2 p, const char* n, double v) : Entite (p, n), vie(v) {}

    private:
    double vie;
};

int main() {
    std::cout <<"affichage des tailles de :"<<"\n";
    std::cout <<"Vec2 = " <<sizeof(Vec2) <<"\n";
    std::cout <<"const char* = " <<sizeof(const char*) <<"\n";
    std::cout <<"Entite = " <<sizeof (Entite) << "\n";
    std::cout <<"Ennemi = " <<sizeof(Ennemi) <<"\n";
    std::cout <<"Joueur = " <<sizeof(Joueur) <<"\n";

    Ennemi e({1.0, 1.0}, "zombie", 5);
    //e.position = {2.0, 2.0};

    e.modifierposition(2.0, 2.0);

 return 0;
}
