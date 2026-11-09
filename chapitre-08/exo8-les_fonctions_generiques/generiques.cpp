#include<iostream>
#include<string>

struct Vec2 {double x, y;};

template <typename T>
void echanger (T& a, T& b) {
    T c = a;
    a = b;
    b = c;
}

template <typename T>
T maximum (T a, T b) {
    return (a > b) ? a : b ;
}

template <typename T>
T minimum (T a, T b) {
    return (a < b) ? a : b ;
 }

template <typename T>
T clamp (T x, T bas, T haut) {
    return minimum(maximum(x, bas), haut);
 }

template <typename T>
void trier(T t[], int n){
    for(int i = 0; i < n - 1; i++){
        int m = i;
        for(int j = i + 1; j < n; j++){
            if(t[j] < t[m]){ m = j;}
        } 
        if (m != i){
            echanger(t[i], t[m]);
        }
    }
}

int main (){
    std::cout<<"maximum(5, 2) = "<<maximum(5, 2)<<"\n";
    std::cout<<"minimum(5, 2) = "<<minimum(5, 2)<<"\n";
    std::cout<<"clamp(17, 5, 9) = "<<clamp(17, 5, 9)<<"\n";
    int a = 4, b = 6;
    std::cout<<"avant l'echange a = "<<a<<", b = "<<b<<"\n";
    echanger(a, b);
    std::cout<<"apres l'echange a = "<<a<<", b = "<<b<<"\n";
    double c = 3.0, d = 4.5;
    std::cout<<"avant l'echange c = "<<c<<", d = "<<d<<"\n";
    echanger(c, d);
    std::cout<<"apres l'echange c = "<<c<<", d = "<<d<<"\n";
    Vec2 u{1, 2}, v{3, 4};
    std::cout<<"avant l'echange u = "<<u.x<<" "<<u.y <<", v = "<< v.x<<" "<<v.y<<"\n";
    echanger(u, v);
    std::cout<<"apres l'echange u = "<<u.x<<" "<<u.y <<", v = "<< v.x<<" "<<v.y<<"\n";
    std::string s[5] = {"zebre", "Yaounde", "arbre", "Zoo", "abricot"};
    trier(s, 5);
    std::cout<<"trier :"<<"\n";
    for (int i = 0; i < 5; i++){
        std::cout<<s[i]<<" ";
    }

   // maximum(u, v);
    //maximum(3, 7.5);

 return 0; 
}
