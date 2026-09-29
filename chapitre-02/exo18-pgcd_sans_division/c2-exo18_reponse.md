Test avec l'algorithme des soustractions multiples:
```
PS C:\Users\MEC\Desktop\ani-1071\chapitre-02\exo18-pgcd_sans_division> g++ c2-exo18_main.cpp -o exo18.exe

PS C:\Users\MEC\Desktop\ani-1071\chapitre-02\exo18-pgcd_sans_division> .\exo18.exe                       
 entrer deux nombres :1000 1
 le pgcd de ces deux nombres est 1le nombres de tours est 999
PS C:\Users\MEC\Desktop\ani-1071\chapitre-02\exo18-pgcd_sans_division> .\exo18.exe
 entrer deux nombres :1071 462
 le pgcd de ces deux nombres est 21le nombres de tours est 11
 ```
 test avec l'algorithme d'euclide
 ```
 PS C:\Users\MEC\Desktop\ani-1071\chapitre-02\exo18-pgcd_sans_division> g++ c2-exo18_reponse.cpp -o exa18.exe
PS C:\Users\MEC\Desktop\ani-1071\chapitre-02\exo18-pgcd_sans_division> .\exa18.exe                       
 entrer deux nombres :1000 1
 le pgcd de ces deux nombres est 1
le nombres de tours est 1
PS C:\Users\MEC\Desktop\ani-1071\chapitre-02\exo18-pgcd_sans_division> .\exa18.exe
 entrer deux nombres :1071 462
 le pgcd de ces deux nombres est 21
le nombres de tours est 3
```
Avec la premiere methode, le pgcd de 1000 et 1 est obtenu après 999 tours. Or avec l'algorithme d'Euclide on l'obtient après 1 tour. Aussi, le pgcd de 1071 et 462 est obtenu après 11 tours avec la première methode contre 3 tours avec l'algorithme d'Euclide. On conclue donc que la méthode d'Euclide est mieux  pour calculer le pgcd que l'algorithme de soustractions multiples