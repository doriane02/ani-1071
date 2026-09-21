compilation avec ajout de -Wall -Wextra
```
PS C:\Users\MEC\desktop> g++ -Wall -Wextra exo.cpp -o exo.exe
exo.cpp: In function 'int main()':
exo.cpp:3:9: warning: unused variable 'a' [-Wunused-variable]
    3 |     int a;
      |         ^
PS C:\Users\MEC\desktop>
```
La différence entre une erreur et un avertissement est que l'erreur signale que le code comporte une violation de règle du language( syntaxe invalide, symbole manquant...) arretant ainsi la compilation sans production d'un executable; tandis que l'avertissement signale un aspect suspect (comme l'inutilisation d'une variable déclarée), sans pour autant que la compilation s'arrete .
C'est l'erreur qui arrête la compilation.
