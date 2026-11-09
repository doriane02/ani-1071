#include<iostream>
#include<vector>

class Ennemi {
    public:
    virtual void deplacer(double dt){(void)dt; }
    virtual ~Ennemi() {std::cout<<"~Ennemi"<<"\n";}
};

class Trace {
    public:
    ~Trace () {std::cout<<"~Trace"<<"\n";}
};

class Fantome : public Ennemi {
    public:
    std::vector<int> v = std::vector<int>(1000);
    Trace t;
    ~Fantome() {std::cout<<"~Fantome "<<v.size()<<"\n";}
};

int main (){

    Ennemi* e = new Fantome;
    delete e;
    std::cout<<"\n";
    Fantome* f = new Fantome;
    delete f;

    return 0;
}
