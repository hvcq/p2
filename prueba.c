#include <stdio.h>

int h(unsigned short x) {
    short a = x;
    x = x>>2;
    short * p = &a;
    short n = x + 4;
    do {
        a = a - 1;
        n -= 2;
    } while (n>4434);
    return *p*a;
}

long f(long x, long *ptr) {
    *ptr = x + 1;
    long result = x % (x+1);
    return result;
}


int main(){
    printf("hola\n");
    return 0;
}