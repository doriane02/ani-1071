Sans compiler ce programme, donnons la valeur de a, b, c, d:
a = 3
b = 5
c = 10
d = 1

Compilons ce programme pour voir ce que l'on obtient
``` 
PS C:\Users\MEC\Desktop\ani-1071\chapitre-02\exo8-avant_apres> g++ c2-exo8_main.cpp -o exo8.exe
PS C:\Users\MEC\Desktop\ani-1071\chapitre-02\exo8-avant_apres> .\exo8.exe
 a = 3
  b = 4
 c = 10
 d = 2
```
Pour le résultat de b, j'ai confondu <<donne puis change >> avec <<change puis donne >>, au niveau du résultat de de d, le calcul n'a pas été très clair a cause du melange post-décrémentation vet pré-décrémentation de la même variable a

la ligne " int d = a-- - --a" est interdite car ce genre de ligne cause généralement  une erreur au niveau de l'analyse syntaxique et est très anumbigu à l'oeil.
