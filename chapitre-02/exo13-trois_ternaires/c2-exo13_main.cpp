#include <cstdio>
  int main () {

    int n, m;

    printf ("entrer deux entiers :");
    scanf("%d %d", &n, &m);
    printf("%d\n", n<m ? n : m);
    printf("%d\n", m>n ? m : n);
    printf(" %s\n",n % 2 == 0 ? "pair" : "impair");
    printf("%d %s", n ,n == 1 ? "objet" : "objets");


return 0;

  }