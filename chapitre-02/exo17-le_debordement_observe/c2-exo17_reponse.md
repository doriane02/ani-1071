voici ce aui ce passe avec lorsau'on compile le programme avec int
```
PS C:\Users\MEC\Desktop\ani-1071\chapitre-02\exo17-le_debordement_observe> g++ c2-exo17_main.cpp -o exo17.exe
PS C:\Users\MEC\Desktop\ani-1071\chapitre-02\exo17-le_debordement_observe> .\exo17.exe
 2 numero de tours 1
 4 numero de tours 2
 8 numero de tours 3
 16 numero de tours 4
 32 numero de tours 5
 64 numero de tours 6
 128 numero de tours 7
 256 numero de tours 8
 512 numero de tours 9
 1024 numero de tours 10
 2048 numero de tours 11
 4096 numero de tours 12
 8192 numero de tours 13
 16384 numero de tours 14
 32768 numero de tours 15
 65536 numero de tours 16
 131072 numero de tours 17
 262144 numero de tours 18
 524288 numero de tours 19
 1048576 numero de tours 20
 2097152 numero de tours 21
 4194304 numero de tours 22
 8388608 numero de tours 23
 16777216 numero de tours 24
 33554432 numero de tours 25
 67108864 numero de tours 26
 134217728 numero de tours 27
 268435456 numero de tours 28
 536870912 numero de tours 29
 1073741824 numero de tours 30
 -2147483648 numero de tours 31
x est devenu negatif au tour 31
 0 numero de tours 32
 x est devenu nul au tour 32
 ```
test avec long long
```
PS C:\Users\MEC\Desktop\ani-1071\chapitre-02\exo17-le_debordement_observe> g++ c2-exo17_main.cpp -o exo17.exe
PS C:\Users\MEC\Desktop\ani-1071\chapitre-02\exo17-le_debordement_observe> .\exo17.exe
 2 numero de tours 1
 4 numero de tours 2
 8 numero de tours 3
 16 numero de tours 4
 32 numero de tours 5
 64 numero de tours 6
 128 numero de tours 7
 256 numero de tours 8
 512 numero de tours 9
 1024 numero de tours 10
 2048 numero de tours 11
 4096 numero de tours 12
 8192 numero de tours 13
 16384 numero de tours 14
 32768 numero de tours 15
 65536 numero de tours 16
 131072 numero de tours 17
 262144 numero de tours 18
 524288 numero de tours 19
 1048576 numero de tours 20
 2097152 numero de tours 21
 4194304 numero de tours 22
 8388608 numero de tours 23
 16777216 numero de tours 24
 33554432 numero de tours 25
 67108864 numero de tours 26
 134217728 numero de tours 27
 268435456 numero de tours 28
 536870912 numero de tours 29
 1073741824 numero de tours 30
 2147483648 numero de tours 31
 4294967296 numero de tours 32
 8589934592 numero de tours 33
 17179869184 numero de tours 34
 34359738368 numero de tours 35
 68719476736 numero de tours 36
 137438953472 numero de tours 37
 274877906944 numero de tours 38
 549755813888 numero de tours 39
 1099511627776 numero de tours 40
 2199023255552 numero de tours 41
 4398046511104 numero de tours 42
 8796093022208 numero de tours 43
 17592186044416 numero de tours 44
 35184372088832 numero de tours 45
 70368744177664 numero de tours 46
 140737488355328 numero de tours 47
 281474976710656 numero de tours 48
 562949953421312 numero de tours 49
 1125899906842624 numero de tours 50
 2251799813685248 numero de tours 51
 4503599627370496 numero de tours 52
 9007199254740992 numero de tours 53
 18014398509481984 numero de tours 54
 36028797018963968 numero de tours 55
 72057594037927936 numero de tours 56
 144115188075855872 numero de tours 57
 288230376151711744 numero de tours 58
 576460752303423488 numero de tours 59
 1152921504606846976 numero de tours 60
 2305843009213693952 numero de tours 61
 4611686018427387904 numero de tours 62
 -9223372036854775808 numero de tours 63
x est devenu negatif au tour 63
 0 numero de tours 64
 x est devenu nul au tour 64
 ```
 test avec unsigned int 
 ```
 PS C:\Users\MEC\Desktop\ani-1071\chapitre-02\exo17-le_debordement_observe> g++ c2-exo17_main.cpp -o exo17.exe
PS C:\Users\MEC\Desktop\ani-1071\chapitre-02\exo17-le_debordement_observe> .\exo17.exe                       
 2 numero de tours 1
 4 numero de tours 2
 8 numero de tours 3
 16 numero de tours 4
 32 numero de tours 5
 64 numero de tours 6
 128 numero de tours 7
 256 numero de tours 8
 512 numero de tours 9
 1024 numero de tours 10
 2048 numero de tours 11
 4096 numero de tours 12
 8192 numero de tours 13
 16384 numero de tours 14
 32768 numero de tours 15
 65536 numero de tours 16
 131072 numero de tours 17
 262144 numero de tours 18
 524288 numero de tours 19
 1048576 numero de tours 20
 2097152 numero de tours 21
 4194304 numero de tours 22
 8388608 numero de tours 23
 16777216 numero de tours 24
 33554432 numero de tours 25
 67108864 numero de tours 26
 134217728 numero de tours 27
 268435456 numero de tours 28
 536870912 numero de tours 29
 1073741824 numero de tours 30
 2147483648 numero de tours 31
 0 numero de tours 32
 x est devenu nul au tour 32
 ```
 x devient negatif( pour le cas de int et long long) parce que en faisant x*=2, à chaque fois on décale tous les bits d'une position vers la gauche et le zero entre à droite. Lorsque le bit de signe est atteint( le bit de signe est le premier bit ) et passse à 1 et la machine lit cela comme <<- ...>>, donc le nombre devient negatif. Au tour suivant le 1 sort et on reste avec (0000...)