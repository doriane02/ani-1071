#include <chrono>
#include <cstdio>

double maintenant()
{
    using namespace std::chrono;
    auto t = steady_clock::now().time_since_epoch();
    return duration<double>(t).count();     // en secondes
}

class chrono {
    public:
    chrono():debut_(maintenant()){}
    double ecoule() const {
        return maintenant() - debut_;
    }
    void redemarrer() {
        debut_= maintenant();
    }

    private:
    double debut_;
};

int main(){
    for (int essai = 1; essai <= 3; essai++){
        long long total = 0;
        chrono c;
        for (long long i = 0; i < 100000000; i++){
            total += i;
        }

            printf("boucle %d : %.6f s\n", essai, c.ecoule());
            printf("total = %lld\n", total);
    }

    chrono c;
    for(int i = 1; i <= 5; i++){
        c.redemarrer();
        printf("d %d : %.9f s\n", i, c.ecoule());
    }

    const chrono k ;
    printf("k.ecoule() = %.9f s\n", k.ecoule());
    k.redemarrer();
    return 0;
}
