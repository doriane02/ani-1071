```
int main(){ return 7;}
```
compilation du programme et affichage du code de sortie
```
PS C:\Users\MEC\DESKTOP> g++ demo10.cpp -o demo.exe
PS C:\Users\MEC\DESKTOP> .\demo.exe
PS C:\Users\MEC\DESKTOP> echo $LASTEXITCODE
7
```
taille de l'executable
```
PS C:\Users\MEC\DESKTOP> ls demo.exe


    Répertoire : C:\Users\MEC\DESKTOP


Mode                 LastWriteTime         Length Name
----                 -------------         ------ ----
-a----        21/09/2026     13:23          38744 demo.exe
```
taille de l'executable bonjour.exe
```
PS C:\Users\MEC\DESKTOP> ls bonjour.exe


    Répertoire : C:\Users\MEC\DESKTOP


Mode                 LastWriteTime         Length Name
----                 -------------         ------ ----
-a----        21/09/2026     13:36          73641 bonjour.exe

```
On constate ici que la taille de bonjour.exe a une taille de 73641, soit environ deux fois la taille de demo.exe.
cet ecart important s'expliqye par la presence de 
```
#include<cstdio>
```
qui permet au processeur de recopier la description d'outils d'entrée et de sortie.
