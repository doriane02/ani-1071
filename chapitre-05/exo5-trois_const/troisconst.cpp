#include<cstdio>

int main(){
    int x = 1, y = 2;
    const int* a = &y;
    int* const b = &x;
    const int* const c = &x; 
     //essai avec a :
     *a = 5;        //refusée
     &a = y;        //acceptée

     // essai avec  b :
     *b = 5;        //acceptée
     &b = y;        //refusée

     //essai avec c :
     *c = 5;        //refusée
     &c = y;        //refusée

     
    return 0;
}
