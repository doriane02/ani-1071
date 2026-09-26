#include <cstdio>

int main (){

    int choix;

    printf ("~~~~~MENU~~~~ \n");
    printf (" 1. Nouvelle partie\n ");
    printf (" 2. Charger\n");
    printf (" 3. Options\n");
    printf (" 4. Quitter\n");
    printf(" Entrer votre choix : ");
    scanf("%d", &choix);

    switch (choix){
        case 1:
        printf ("lancement de la nouvelle partie\n");
        break;

        case 2:
        printf(" chargement\n");
        break;

        case 3:
        printf(" affichage des options\n");
        

        case 4:
        printf(" A bientot!!\n");
        break;

        default :
        printf(" choix invalide\n");
        break;
    }

return 0;
}