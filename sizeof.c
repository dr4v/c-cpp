/*
sizeof of data types in c11
*/
#include <stdio.h>

int main()
{
    int x = 10;
    unsigned y = 150U;
    long long int z = 150000LL;
    _Bool b = 1;
    char c = 'A';
    double d = 10.50;
    
    printf("%d %d\n", x, sizeof(x));
    printf("%d %d\n", y, sizeof(y));
    printf("%d %d\n", z, sizeof(z));
    printf("%d %d\n", b, sizeof(b));
    printf("%c %d\n", c, sizeof(c));
    printf("%f %d\n", d, sizeof(d));
    return 0;
}