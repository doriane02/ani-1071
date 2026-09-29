Voici ce que le programme donne lorqu'on le compile
int    : 4 octets
float   : 4 octets
char    : 1 octets
long   : 4 octets
double  : 8 octets
unsigned char   : 1 octets
long long    : 4 octets
long double   : 16 octets
short    : 2 octets
unsigned int    : 4 octets

Lorsqu'on ajoute te douzième type "void", le message d'erreur suivant apparait
```
PS C:\Users\MEC\Desktop\ani-1071\chapitre-02\demo3-le_tableau_des_tailles> g++ c2-demo3_main.cpp
c2-demo3_main.cpp: In function 'int main()':
c2-demo3_main.cpp:16:38: warning: invalid application of 'sizeof' to a void type [-Wpointer-arith]
   16 |     printf("void    : %zu octets\n", sizeof(void));
      |                                      ^~~~~~~~~~~~
```
Cela sexplique par le fait que le type void n'a pas de taille memoire mesurable avec sizeof,car le represente l'absence de type ou de valeur.
Le type reputé pour changer de taille selon le système (notamment windows et linux)est le type "long", sur windows comme le montre lexercice sa taille est 4 octets et sur linux sa taille est 8 octets.
Un type de n octets vaut 8n bits , soit 2^8n.
Un type de un octet peut contenir 256 valeurs.