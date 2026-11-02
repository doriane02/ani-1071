#include <cstdio>
#include <cmath>

struct Vec2
{
    double x, y;

Vec2() : x(0), y(0) {}

Vec2(double x_, double y_) : x(x_), y(y_) {}

double length() const{
    return sqrt(x * x + y * y);
}

double dot(Vec2 b)const {
    return x * b.x + y * b.y;
}

Vec2 normalized() const{
    double l = length ();
    if ( l == 0) {
        return Vec2(0, 0);
    }
    return Vec2(x / l, y / l);
}

void normalize() {
    double l = length();
    if (l == 0) {
        return;
    }
    x /= l;
    y /= l;
}

Vec2& operator+=(const Vec2& b) { x += b.x; y += b.y; return *this; }
Vec2& operator-=(const Vec2& b) { x -= b.x; y -= b.y; return *this; }
Vec2& operator*=(double k) { x *= k; y *= k; return *this; }
double& operator[](int i) { return i == 0 ? x : y; }
const double& operator[](int i) const { return i == 0 ? x : y; }
};

Vec2 operator+(const Vec2& a, const Vec2& b) { return Vec2(a.x + b.x, a.y + b.y); }
Vec2 operator+(const Vec2& a) { return a; }
Vec2 operator-(const Vec2& a, const Vec2& b) { return Vec2(a.x - b.x, a.y - b.y); }
Vec2 operator-(const Vec2& a) { return Vec2(-a.x, -a.y); }
Vec2 operator/(const Vec2& a, double k) { return Vec2(a.x / k, a.y / k); }
Vec2 operator*(const Vec2& a, double k) { return Vec2(a.x * k, a.y * k); }
Vec2 operator*(double k, const Vec2& a) { return a * k; }
bool operator==(const Vec2& a, const Vec2& b) { return a.x == b.x && a.y == b.y; }
bool operator!=(const Vec2& a, const Vec2& b) { return !(a == b); }


int main(){
   Vec2 o;
    Vec2 a(3.0, 4.0), b(1.0, 2.0);
    Vec2 r;

    printf("Vec2() = (%g, %g)\n", o.x, o.y);
    printf("Vec2(3,4) = (%g, %g)\n", a.x, a.y);
    printf("a.length() = %g\n", a.length());
    printf("a.dot(b) = %g\n", a.dot(b));

    r = a.normalized();
    printf("a.normalized() = (%g, %g), a = (%g, %g)\n", r.x, r.y, a.x, a.y);

    Vec2 n = a;
    n.normalize();
    printf("n.normalize() -> (%g, %g)\n", n.x, n.y);

    Vec2 z;
    z.normalize();
    printf("vecteur nul normalise = (%g, %g)\n", z.x, z.y);

    r = a + b;  printf("a + b = (%g, %g)\n", r.x, r.y);
    r = a - b;  printf("a - b = (%g, %g)\n", r.x, r.y);
    r = -a;     printf("-a = (%g, %g)\n", r.x, r.y);
    r = +a;     printf("+a = (%g, %g)\n", r.x, r.y);
    r = a / 2.0; printf("a / 2 = (%g, %g)\n", r.x, r.y);
    r = a * 2.0; printf("a * 2 = (%g, %g)\n", r.x, r.y);
    r = 2.0 * a; printf("2 * a = (%g, %g)\n", r.x, r.y);
    printf("a == b : %d, a != b : %d\n", a == b, a != b);

    Vec2 c = a;
    c += b;   printf("c += b -> (%g, %g)\n", c.x, c.y);
    c -= b;   printf("c -= b -> (%g, %g)\n", c.x, c.y);
    c *= 3.0; printf("c *= 3 -> (%g, %g)\n", c.x, c.y);
    c[1] = 5.0;
    printf("c[0] = %g, c[1] = %g\n", c[0], c[1]);

    printf("chute:\n");
    Vec2 p(0.0, 10.0), v(3.0, 0.0), g(0.0, -9.81);
    double dt = 0.1, t = 0.0;
    printf("t=%.1f p=(%.4f, %.4f) v=(%.4f, %.4f)\n", t, p.x, p.y, v.x, v.y);
    while (p.y >= 0.0)
    {
        v += g * dt;
        p += v * dt;
        t += dt;
        printf("t=%.1f p=(%.4f, %.4f) v=(%.4f, %.4f)\n", t, p.x, p.y, v.x, v.y);
    }

    double tSol = std::sqrt(2.0 * 10.0 / 9.81);
    printf("t formule = %.4f\n", tSol);
    return 0;
}

