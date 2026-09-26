Voici un petit apercu de ce fait ce programme:
```
PS C:\Users\MEC\Desktop\ani-1071\chapitre-02\exo7-le_menu> .\exo7.exe
~~~~~MENU~~~~ 
 1. Nouvelle partie
  2. Charger
 3. Options
 4. Quitter
 Entrer votre choix : 2
 chargement
PS C:\Users\MEC\Desktop\ani-1071\chapitre-02\exo7-le_menu> .\exo7.exe
~~~~~MENU~~~~ 
 1. Nouvelle partie
  2. Charger
 3. Options
 4. Quitter
 Entrer votre choix : 4
 A bientot!!
 PS C:\Users\MEC\Desktop\ani-1071\chapitre-02\exo7-le_menu> .\exo7.exe                      
~~~~~MENU~~~~ 
 1. Nouvelle partie
  2. Charger
 3. Options
 4. Quitter
 Entrer votre choix : 3
 affichage des options
 ```

 Lorsqu'on retire un break dans le code( precisement celui du case 3), voici ce qui se passe:
 ```
 PS C:\Users\MEC\Desktop\ani-1071\chapitre-02\exo7-le_menu> .\exo7.exe
~~~~~MENU~~~~ 
 1. Nouvelle partie
  2. Charger
 3. Options
 4. Quitter
 Entrer votre choix : 3
 affichage des options
 A bientot!!
 ```
 
 On constate que les message du choix 3 et 4  s'affichent. On peut donc retenir que le break permet de sortir de la boucle dès que l'exécution du choix effectué a été réalisée.