#include <stdio.h>

/*int h(unsigned short x) {
    short a = x>>2;
    short * p = &x;
    short n = x + 4;
    do{
        *p -= 1;
        n -= 2;
    }while (n > 0);
    return n* *p;
}*/

int h(unsigned short x) {
    short a = x >> 2;
    short * p = &x;
    short n = a + 4;
    do{
        *p -= 1;
        n -= 2;
    }while (n > 0);
    return *p*a;
}

long f(long x, long *ptr) {
    *ptr = x + 1;
    long result = x % (*ptr);
    return result;
}

long fun1(long xx,long yy){
    return xx + yy;
}

long fun0(long x, long y){
    long a = fun1(y,x);
    long b = fun1(x,y+y);
    return a + b;
}  

int misterio(int x,int n){
    if(n == 1)
        return x;
    else if(n == 0)
        return 1;
    int r = misterio(x,n>>1);
    r = r*r;
    if(n & 1 != 0)
        r = r*x;
    return r;
}

int g(int x, int arr[],int i){
    int sum = x;
    sum+= arr[i];
    return sum; 
}

int main(){
    /*int awa = 0;
    scanf("%d\n",&awa);
    if(awa){
        printf("if\n");
    }else{
        printf("else\n");
    }
    return 0;
    */
}