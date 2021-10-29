#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str[80];
    fgets(str,80,stdin);
    printf("0x%15x\n",str);
    long long int x = 734140870366478696;
    /*int res = strcmp(str,(char *)x);
    if(res){
        printf("Entro al if (explota)\n");
    }else{
        printf("Entro al else (no explota)\n");
    }*/
    return 0;
}