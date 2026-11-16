#include <vec2.h>
#include <cmath>

namespace {

float carre(float v) {
    return v * v;
}

}

namespace ani {

Vec2 ajouter(Vec2 a, Vec2 b) {
    return Vec2{a.x + b.x, a.y + b.y};
}

float produitScalaire(Vec2 a, Vec2 b) {
    return a.x * b.x + a.y * b.y;
}

float longueur(Vec2 v) {
    return std::sqrt(carre(v.x) + carre(v.y));
}

}

