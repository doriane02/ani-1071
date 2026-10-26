#include<cstdio>
#include<cmath>

#define PI 3.1415926535

struct Vec2
{
    double x;
    double y;
};
Vec2 add(Vec2 a, Vec2 b){
    return {a.x + b.x, a.y + b.y};
 }

Vec2 sub(Vec2 a, Vec2 b){
    return {a.x - b.x, a.y - b.y};
 }

Vec2 scale(Vec2 a, double k){
    return {a.x * k, a.y * k};
}

double dot(Vec2 a, Vec2 b){
    return a.x * b.x + a.y * b.y;
}

double length(Vec2 a){
    return sqrt(dot(a, a)); 
}

Vec2 normalize(Vec2 a){
    double l = length(a);
    if (l == 0){
        return {0, 0};
    }
    return {a.x / l, a.y / l};
}

Vec2 lerp(Vec2 a, Vec2 b, double t){
    return add(a, scale (sub(b, a), t));
}

Vec2 perp(Vec2 a){
    return {-a.y, a.x};
} 

Vec2 rotate(Vec2 a, double angle){
   return {a.x * cos(angle) - a.y * sin(angle), a.x * sin(angle) + a.y * cos(angle)};
}

Vec2 reflect(Vec2 v, Vec2 n){
    return sub(v, scale(n, 2 * dot(v, n)));
    }

double radians(double degres){ 
    return degres * PI / 180;
}

int main(){
    const double EPS = 1e-9;

    printf("length({3,4}) = %.17g\n", length({3, 4}));

    printf("dot({1,0},{0,1}) = %.17g\n", dot({1, 0}, {0, 1}));

    Vec2 A = rotate({1, 0}, radians(90));
    printf("rotate({1,0}, radians(90)) = {%.17g, %.17g}", A.x, A.y);
    printf(" egal a {0,1} a %.6g pres = %s\n", EPS, (fabs(A.x - 0) < EPS && fabs(A.y - 1) < EPS) ? "oui" : "non");
         

    Vec2 B = reflect({1, -1}, {0, 1});
    printf("reflect({1,-1},{0,1}) = {%.17g, %.17g}\n", B.x, B.y);

    Vec2 u = add({1, 2}, {3, 4});
    printf("add({1,2},{3,4}) = {%.17g, %.17g}\n", u.x, u.y);      

    Vec2 v = sub({1, 2}, {4, -2});
    printf("sub({1, 2},{4, -2}) = {%.17g, %.17g}\n", v.x, v.y);      

    Vec2 w = scale({4, -2}, 3);
    printf("scale({4, -2},3) = {%.17g, %.17g}\n", w.x, w.y);        

    Vec2 C = normalize({3, 4});
    printf("normalize({3,4}) = {%.17g, %.17g}\n", C.x, C.y); 

    Vec2 D = normalize({0, 0});
    printf("normalize({0,0}) = {%.17g, %.17g}\n", D.x, D.y);      

    Vec2 E = lerp({0, 0}, {10, 20}, 0.5);
    printf("lerp({0,0},{10,20},0.5) = {%.17g, %.17g}\n", E.x, E.y); 

    Vec2 F = perp({3, 4});
    printf("perp({3,4}) = {%.17g, %.17g}\n", F.x, F.y);           

    return 0;
}
