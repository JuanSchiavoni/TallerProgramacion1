#include <stdio.h>

int main () {
    int n, cont=0, i;
    do {
        printf("Ingrese un numero\n");
        scanf("%d", &n);
    }while(n<0);
    for(i=n; i>0; i--) {
        if(n%i==0) {
            cont++;
        }
    }
    if(cont==2) {
        printf("%d es un numero primo\n", n);
    }else {
        printf("%d es un numero compuesto\n", n);
    }
return 0;
}
