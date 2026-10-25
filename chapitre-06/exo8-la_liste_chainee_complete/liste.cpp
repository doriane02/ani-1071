#include<cstdio>

struct Noeud
{
    int    valeur;
    Noeud* suivant;     // le suivant, ou nullptr
};

Noeud* ajouterEnTete(Noeud* tete, int v){
    return new Noeud{v, tete};
}

Noeud* ajouterEnQueue(Noeud* tete, int v){
    if(tete == nullptr){
        return new Noeud{v, nullptr};
    }
    Noeud* courant = tete;
    while(courant->suivant != nullptr){
        courant = courant->suivant;
    }
    courant->suivant = new Noeud{v, nullptr};
    return tete;
}

int compter(const Noeud* n){
    int compt = 0;
    while(n != nullptr){
        compt++;
        n = n->suivant;
    }
    return compt;
}

bool contient(const Noeud* n, int v){
    while(n != nullptr){
        if(n->valeur == v){
            return true;
        }
        n = n->suivant;
    }
    return false;   
}

void afficher(const Noeud* n){
    while(n != nullptr){
        printf("%d ", n->valeur);
        n = n->suivant;
    }
    printf("\n");
}

Noeud* retirer(Noeud* tete, int v){
    if (tete == nullptr) {
        return nullptr;
    }
    if (tete->valeur == v) {
        Noeud* nouvelleTete = tete->suivant;
        delete tete;
        return nouvelleTete;
    }
    Noeud* courant = tete;
    while(courant -> suivant != nullptr && courant->suivant->valeur != v){
        courant = courant->suivant;
    }
    if (courant->suivant != nullptr) {
        Noeud* supp = courant->suivant;
        courant->suivant = supp->suivant;
        delete supp;
    }
    return tete;
}

void liberer(Noeud* n){
    while(n != nullptr){
        Noeud* suivant = n->suivant;
        delete n;
        n = suivant;
    }
}

Noeud* inverser(Noeud* tete){
    Noeud* precedent = nullptr;
    Noeud* courant  = tete;
    while(courant != nullptr){
        Noeud* suivant = courant -> suivant;
        courant -> suivant = precedent;
        precedent = courant;
        courant = suivant;
    }
    return precedent;
}

int main(){

    int t[5] = {1, 5, 78, 9, -11};
    int compt = 0;

    Noeud* tete = nullptr;
    for(int i = 0; i < 5; i++){
        tete = ajouterEnTete(tete, t[i]);
    }
    printf("liste de depart :\n");
    afficher(tete);
    compt = compter(tete);
    printf("compter le nombre d'elements de la liste avant liberation : %d\n",compt);
    printf("ajouter un element en tete : 20\n");
    tete = ajouterEnTete(tete, 20);
    afficher(tete);
    printf("ajouter un element en queue : 30\n");
    tete = ajouterEnQueue(tete, 30);
    afficher(tete);
    printf("verifier si la liste contient -11 : %s\n", contient(tete, -11) ? "oui" : "non");
    printf("retirer l'element 5\n");
    tete = retirer(tete, 5);
    afficher(tete);
    printf("retirer l'element 100\n");
    tete = retirer(tete, 100);
    afficher(tete);
    printf("retirer l'element en tete : 20\n");
    tete = retirer(tete, 20);
    afficher(tete);
    printf("inverser la liste\n");
    tete = inverser(tete);
    afficher(tete);
    liberer(tete);
    tete = nullptr;
    afficher(tete);
    compt = compter(tete);
    printf("compter le nombre d'elements de la liste apres liberation : %d\n",compt);

    return 0;
}
