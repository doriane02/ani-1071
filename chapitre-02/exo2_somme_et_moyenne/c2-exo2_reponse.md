Le programme
```
#include<cstdio>

  int main(){

    int a, b, c ,d ,e, somme;
    double moyenne;

       printf ("entrer cinq entiers:");    // bien vouloir entrer les entiers sous cette forme : a b c d e 
       scanf ("%d %d %d %d %d", &a, &b, &c, &d, &e);
       somme= a+b+c+d+e;
       moyenne= (double)somme/5;
       printf ("somme = %d\n",somme);
       printf  (" moyenne = %.1f",moyenne);

    return 0;
  }
```
voici le resultat obtenu après compilation du programme avec les valeurs 7 8 9 10 10 
```
PS C:\Users\MEC\desktop> g++ moy.cpp -o moy.exe
PS C:\Users\MEC\desktop> .\moy.exe
entrer cinq entiers:7 8 9 10 10
somme= 44
 moyenne= 8.8
```

