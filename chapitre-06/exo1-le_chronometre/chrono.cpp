#include <chrono>
#include <cstdio>

double maintenant()
{
    using namespace std::chrono;
    auto t = steady_clock::now().time_since_epoch();
    return duration<double>(t).count();     // en secondes
}

int main(){

    long long total = 0;
    double debut = maintenant();
    for(int i = 1; i <= 1000000; i++){
      total += i;  
    }
    double fin = maintenant();
    printf("total = %lld\n", total);
    printf("duree de la boucle : %f\n", fin - debut);

    double t[5];
    for(int i = 0; i < 5; i++){
        double debut = maintenant();
        printf("ok\n");
        double fin = maintenant();
        t[i] = fin - debut;
    }

    for(int i = 0; i < 5; i++){
        printf("mesure numero %d : %f\n", i + 1, t[i]);
    }

    return 0;
}

