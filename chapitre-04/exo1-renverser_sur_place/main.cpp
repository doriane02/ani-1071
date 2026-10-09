#include<cstdio>

void renverser(int t[], int n) {
   for (int i = 0; i < n / 2; i++) {
        int c = t[i];
        t[i] = t[n - i - 1];
        t[n - i - 1] = c; 
   }  
}

int main () {
 
    int n;
      scanf("%d", &n);
      int t[n];
      for (int i = 0; i < n; i++){
        scanf("%d", &t[i]);
      }
      renverser(t, n);
      for (int i = 0; i < n; i++){
        printf("%d\n", t[i]);
      }

      return 0;
}
