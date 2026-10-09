#include<cstdio>

void renverser(int t[], int n) {
    int c;
   for (int i = 0; i < n - 1; i++) {
        c = t[i];
        t[i] = t[n - i - 1];
        t[n - i - 1] = c; 
   }  
}

int main () {
 
    int n, t[n];

      scanf("%d", &n);
      for (int i = 0; i < n; i++){
        scanf("%d", &t[i]);
      }
      renverser(t, n);
      for (int i = 0; i < n; i++){
        printf("%d\n", t[i]);
      }

      return 0;
}
