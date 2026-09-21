```
#include <cstdio>
int main(){
    int a;

      printf("entrer un entier:");
      scanf("%d",&a);
      printf("le double de %d est %d", a, a * 2);
      return 0;
    
}
```
```
PS C:\Users\MEC\desktop> g++ prduit.cpp -o prduit.exe
PS C:\Users\MEC\desktop> .\prduit.exe
entrer un entier:3
le double de 3 est 6
```
suppression du fichier source 
```
PS C:\Users\MEC\desktop> test-path prduit.cpp (cette commande permet de rechercher un fichier, renvoiant False si celui-ci n'existe plus)
False
PS C:\Users\MEC\desktop> .\prduit.exe
entrer un entier:5
le double de 5 est 10
PS C:\Users\MEC\desktop>
```
On remarque que même en supprimant le fichier source, l'exécutable donne toujours le résultat attendu; ceci prouve 
donc que l'executable est un fichier independant du fichier source aui lui a donné naissance,il contient tout
ce dont l'ordinateur a besoin pour s'executer. Ceci prouve donc qu'il est tout a fait possible de livrer un 
programme exécutable sans son code source car ce dernier dispose de tout ce dont l'ordinateur aura besoin pour 
s'executer.
