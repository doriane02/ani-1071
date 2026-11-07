#include<iostream>

int gEnnemi, gFantome ,gRobot;

class Ennemi{
    public:
    virtual void deplacer(double dt) { (void)dt ;gEnnemi++;}
    virtual ~Ennemi() {}
};

class Fantome : public Ennemi {
    public:
    void deplacer(double dt) override {(void)dt; gFantome++;}

};

class Robot : public Ennemi {
    public: 
    void deplacer (double dt) override {(void)dt; gRobot++;}
};

int main (){
    Ennemi* t[6] = {new Ennemi, new Robot, new Robot, new Fantome, new Fantome, new Fantome};
    for(Ennemi* e : t){
        for(int i = 0; i < 10; i++){
            e -> deplacer(0.1);
        }
    }

    std::cout<<"gEnnemi = "<<gEnnemi<<"\n";
    std::cout<<"gFantome = "<<gFantome<<"\n";
    std::cout<<"gRobot = "<<gRobot<<"\n";
     for(Ennemi* e : t){
        delete e;
     }

     return 0;
}

