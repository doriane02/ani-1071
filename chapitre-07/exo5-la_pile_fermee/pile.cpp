#include<cstdio>

class Pile{
    public:
    static const int capacite = 100;
    void empiler( int v) { if (nombre < 100) elements[nombre++] = v; }
    int  depiler()        { return (nombre > 0) ? elements[--nombre] : -1; }
    int  sommet() const    { return (nombre > 0) ? elements[nombre - 1] : -1; }
    bool vide() const      { return nombre == 0; }
    int taille() const{ return nombre;}
    bool pleine() const{return nombre == capacite;}

    private:
    int  elements[100];
    int  nombre = 0;           // d'éléments ; aussi l'indice du prochain
};

class File{
    public:
    static const int capacite = 100;
    void enfiler(int v)
    {
    if (nombre == 100) return;
    elements[queue] = v;
    queue = (queue + 1) % 100;        // le compteur qui tourne
    nombre++;
    }
    int defiler()
    {
    if (nombre == 0) return -1;
    int v = elements[tete];
    tete = (tete + 1) % 100;
    nombre--;
    return v;
    }
    bool pleine() const{return nombre == capacite;}
    int taille() const{return nombre;}

    private:
       int elements[100];
    int tete = 0;              // d'où l'on sort
    int queue = 0;             // où l'on entre
    int nombre = 0;
};

int main(){
    Pile p;
    File f;
    //p.nombre = -5;
    //f.tete = 7;
    for(int i = 0; i < 150; i++){
        p.empiler(i);
    }
    printf("pile apres 150 empilements: %d \n", p.taille());

    for(int i = 0; i < 200; i++){
        p.depiler();
    } 
    printf("pile apres 200 depilements: %d \n", p.taille());

    for(int i = 0; i < 150; i++){
        f.enfiler(i);
    }
    printf("file apres 150 enfilements: %d \n", f.taille());

    for(int i = 0; i < 30; i++){
        f.defiler();
    }
    printf("file apres 100 defilements: %d \n", f.taille());

    for(int i = 0; i < 50; i++){
        f.enfiler(i);
    }
    printf("file apres 80 enfilements: %d \n", f.taille());

    return 0;
}   
