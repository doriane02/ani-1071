#include<iostream>

struct Vec2
{
    double x, y;
};

class Entite {
    public:
    Vec2 position;
};

class Mobile : virtual public Entite {
    public:
    Vec2 vitesse;
};

class Visible : virtual public Entite {
    public:
    char glyphe;
};

class Ennemi : public Mobile, public Visible {

};

int main (){
    Ennemi e;
    Mobile& m = e;
    Visible& v = e;
    v.position.x = 0;
    e.position.x = 3.0;
    std::cout<<"position vu par Mobile = "<<m.position.x<<"\n";
    std::cout<<"position vu par Visible = "<<v.position.x<<"\n";
    std::cout<<"Taille de Entite = "<<sizeof(Entite)<<"\n";
    std::cout<<"Taille de Mobile = "<<sizeof(Mobile)<<"\n";
    std::cout<<"Taille de visible = "<<sizeof(Visible)<<"\n";
    std::cout<<"Taille de Ennemi = "<<sizeof(Ennemi)<<"\n";

    return 0;
}
