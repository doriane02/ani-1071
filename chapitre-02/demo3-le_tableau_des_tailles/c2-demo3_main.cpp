#include<cstdio>

int main(){

    printf("bool    : %zu octets\n", sizeof(bool));
    printf("int    : %zu octets\n", sizeof(int));
    printf("float   : %zu octets\n", sizeof(float));
    printf("char    : %zu octets\n", sizeof(char));
    printf("long   : %zu octets\n", sizeof(long));
    printf("double  : %zu octets\n", sizeof(double));
    printf("unsigned char   : %zu octets\n", sizeof(unsigned char));
    printf("long long    : %zu octets\n", sizeof(long long));
    printf("long double   : %zu octets\n", sizeof(long double));
    printf("short    : %zu octets\n", sizeof(short));
    printf("unsigned int    : %zu octets\n", sizeof(unsigned int));
    printf("void    : %zu octets\n", sizeof(void));

return 0;

}