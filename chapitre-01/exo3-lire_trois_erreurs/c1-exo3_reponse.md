#include int main(){ Printf("NTSAMA ABEGA THERESE DORIANE\n"); printf("YAOUNDE\n");}

 première erreur: écriture de Printf à la ligne 3 sohan.cpp: In function 'int main()': sohan.cpp:3:5: error: 'Printf' was not declared in this scope; did you mean 'printf'? 3 | Printf("NTSAMA ABEGA THERESE DORIANE\n"); | ^~~~~~ ligne signalée:3; ligne fautive : 3 c'est au niveau de la compilation que l'erreur a été détecté

#include int main(){ printf("NTSAMA ABEGA THERESE DORIANE\n"); printf("YAOUNDE\n") return 0;

}

deuxième errreur:retirer le point virgule à la ligne 4 sohan.cpp: In function 'int main()': sohan.cpp:4:24: error: expected ';' before 'return' 4 | printf("YAOUNDE\n") | ^ | ; 5 | return 0; | ~~~~~~
ligne signalée: 4 Ligne fautive: 4 C'est au niveau de la compilation que l'erreur a été signalée

int main(){ printf("NTSAMA ABEGA THERESE DORIANE\n"); printf("YAOUNDE\n"); return 0;

}

troisième erreur: retirer #include ohan.cpp: In function 'int main()': sohan.cpp:3:5: error: 'printf' was not declared in this scope 3 | printf("NTSAMA ABEGA THERESE DORIANE\n"); | ^~~~~~ sohan.cpp:1:1: note: 'printf' is defined in header ''; this is probably fixable by adding '#include ' +++ |+#include 1 | ligne signalée: 3
C'est au niveau de la compilation que cette erreur a été signalée
