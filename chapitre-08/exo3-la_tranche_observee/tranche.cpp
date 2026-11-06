#include<iostream>

class Entite {
    public:
    virtual const char*nom() const {return "entite";}

    virtual ~Entite () {}
};

class Ennemi : public Entite {
    public:
    int degats;
    const char* nom() const override {return "ennemi";};
};

void f(Entite e){
    std::cout<<"avec f: "<< e.nom()<<"\n";
}

void g(Entite& e){
    std::cout <<"avec g : "<<e.nom()<<"\n";
}

void h(Entite* e){
    std::cout<<"avec h : "<<e -> nom()<<"\n";
}

int main (){
    Ennemi en;
    f(en);
    g(en);
    h(&en);
    std::cout<<"la taille en octet de entite = "<<sizeof(Entite)<<"\n";
    std::cout<<"la taille en octet de Ennemi = "<<sizeof(Ennemi)<<"\n";

    return 0;
}
