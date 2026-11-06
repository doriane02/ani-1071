#include<iostream>

class Base{
    public:
    int publique;
    Base():publique(1), protegee(2), privee(3) {}

    protected:
    int protegee;

    private:
    int privee;
};

class Derivee : public Base {
    public:
    void afficher(){
        std::cout<<"afficher publique = "<<publique<<"\n";
        std::cout<<"afficher protegee = "<<protegee<<"\n";
       // std::cout<<"afficher privee = "<<privee<<"\n";
    }
};

void soigner(Base& b){
    b.protegee = 1;
}
 
int main(){
    Derivee d;
    std::cout <<"afficher publique = "<<d.publique<<"\n";
    //std::cout <<"afficher protegee = "<<d.protegee<<"\n";
    //std::cout <<"afficher privee = "<<d.privee<<"\n";

    d.afficher();
    return 0;
}
