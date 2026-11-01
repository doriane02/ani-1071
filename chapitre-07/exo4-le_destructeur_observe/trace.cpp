#include<cstdio>

class Trace{
    public:
    Trace(const char* n) : nom_(n) {printf("%s nait\n", nom_);}
    ~Trace() {printf("%s meurt\n", nom_);}
    const char* nom_;
};

void fonction(){
    Trace f("fonction");
    printf("fin de la fonction\n");
}

int main(){
    Trace m("main");
    fonction();
    {
        Trace b("bloc");
        printf("fin du bloc\n");
    }
    Trace* perdue = new Trace("new sans delete");
    Trace* rendue = new Trace("new avec delete");
    delete rendue;
    {
        Trace p1("paire 1");
        Trace p2("paire 2");
        printf("fin du bloc des deux \n");
    }
    printf("fin du main\n");
    (void)perdue;
    m.~Trace();
    return 0;
}
