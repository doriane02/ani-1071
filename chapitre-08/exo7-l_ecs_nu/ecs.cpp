#include<iostream>

struct Vec2
{
    double x, y;
    Vec2() : x(0.0), y(0.0) {}
    Vec2(double x_, double y_) : x(x_), y(y_) {}
    Vec2& operator+=(Vec2 b) { x += b.x; y += b.y; return *this; }
};
Vec2 operator+(Vec2 a, Vec2 b)     { return {a.x + b.x, a.y + b.y}; }
Vec2 operator*(Vec2 a, double k)   { return {a.x * k, a.y * k}; }

const int MAX = 1000;
using Entite = int;

struct Transform  { Vec2 position; double rotation; Vec2 echelle; };
struct Corps      { Vec2 vitesse; double masse; };
struct Sprite     { char glyphe; };

Transform transforms[MAX];  bool aTransform[MAX] = {};
Corps     corps[MAX];       bool aCorps[MAX]     = {};
Sprite    sprites[MAX];     bool aSprite[MAX]    = {};

int suivante[MAX];
int premiereLibre = 0;

void initialiser (){
    for (int i = 0; i < MAX - 1; i++){
        suivante[i] = i + 1;
    }
    suivante[MAX - 1] = -1;
}

Entite creerEntite() {
    if (premiereLibre == -1){
        return -1;
    }
    Entite e = premiereLibre;
    premiereLibre = suivante[e];
    return e;
}

void detruireEntite(Entite e) {
    aTransform[e] = false;
    aCorps[e] = false;
    aSprite[e] = false;
    suivante[e] = premiereLibre;
    premiereLibre = e;
}

int systemePhysique(double dt) {
    int n = 0;
    for (int e = 0; e < MAX; e++){
        if(!aCorps[e] || !aTransform[e]){
            continue;
        }
        corps[e].vitesse += Vec2(0.0, -9.81) * dt;
        transforms[e].position += corps[e].vitesse * dt;
        n++;
    }
    return n;
}

const int H = 20, L = 40;
char image[H][L];

void effacer(char c = ' ')
{
    for (int y = 0; y < H; y++)
        for (int x = 0; x < L; x++)
            image[y][x] = c;
}

void point(int x, int y, char c = '#')
{
    if (x < 0 || x >= L || y < 0 || y >= H) return;   // hors de la grille : rien
    image[y][x] = c;
}

void afficher()
{
    for (int y = 0; y < H; y++)
    {
        for (int x = 0; x < L; x++) printf("%c", image[y][x]);
        printf("\n");
    }
}

int systemeRendu() {
    int n = 0;
    for(int e = 0; e < MAX; e++){
        if (!aSprite[e] || !aTransform[e]){
            continue;
        }
        point((int)transforms[e].position.x, H - 1 - (int)transforms[e].position.y, sprites[e].glyphe);
        n++;
    }
    return n;
}

void decor(double x, double y){
    Entite e = creerEntite();
    transforms[e].position = Vec2(x, y);
    aTransform[e] = true;
    sprites[e].glyphe = '#';
    aSprite[e] = true;
}

void balle(double x, double y){
    Entite e = creerEntite();
    transforms[e].position = Vec2(x, y);
    aTransform[e] = true;
    corps[e].vitesse = Vec2(0.0, 5.0);
    corps[e].masse = 1.0;
    aCorps[e] = true;
    sprites[e].glyphe = 'o';
    aSprite[e] = true;
}

void Ennemi(double x, double y){
    Entite e = creerEntite();
    transforms[e].position = Vec2(x, y);
    aTransform[e] = true;
    corps[e].vitesse = Vec2(0.0, 0.0);
    corps[e].masse = 2.0;
    aCorps[e] = true;
    sprites[e].glyphe = 'X'; 
    aSprite[e] = true;
}
int main() {

     initialiser();
     for(int i =0; i < 40; i++){
        decor(i, 0);
     }
     for(int i = 0; i < 40; i++){
        balle(i, 5);
     }
     for(int i = 0; i < 20; i++){
        Ennemi(i * 2, 10);
     }

     for (int pas = 0; pas < 5; pas++){
        int p = systemePhysique(0.1);
        effacer();
        int r = systemeRendu();
        std::cout << "pas " << pas << " : physique = " << p << ", rendu = " << r << "\n";
     }
     afficher();

     for (int e = 5; e <= 50; e += 5 ){
        detruireEntite(e);
     }
     std::cout<<"Nouveaux : ";
     for(int i = 0; i < 5; i++){
        Entite e = creerEntite();
        std::cout<<" "<<e;
        transforms[e].position = Vec2(i, 3);
        aTransform[e] = true;
        corps[e].vitesse = Vec2(0.0, 0.0);
        corps[e].masse = 1;
        aCorps[e] = true;
        sprites[e].glyphe = '*';
        aSprite[e] = true;
     }
     std::cout<<"\n";

     int p = systemePhysique(0.1);
     effacer();
     int r = systemeRendu();
     std::cout<<"physique = "<<p<<", rendue = "<<r<<"\n";
     afficher();
    
     return 0;
}
