code
```
#include<cstdio>
int main(){
    int a;
      printf("entrer un nombre:");
      scanf("%d",&a);
      if (a%2==0){
        return 0;
      }else{
        return 1;
      }

    
}
```
tests
```
PS C:\Users\MEC\desktop> g++ demo3.cpp -o demo3.exe
PS C:\Users\MEC\desktop> .\demo.exe
entrer un nombre:3
PS C:\Users\MEC\desktop> echo $LASTEXITCODE
1
PS C:\Users\MEC\desktop> echo $LASTEXITCODE
0
PS C:\Users\MEC\desktop> .\demo3.exe
entrer un nombre:67
PS C:\Users\MEC\desktop> echo $LASTEXITCODE
1
PS C:\Users\MEC\desktop> .\demo3.exe
entrer un nombre:112
PS C:\Users\MEC\desktop> echo $LASTEXITCODE
0
```
