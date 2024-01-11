#include <stdio.h>

#define ENTRE(X) (X>=0 && X<=100)? 1:0

int main () {

    int n;
    printf("ingrese un numero \n");
    scanf("%d", &n);
    if (ENTRE(n)>0) {

        printf("%d esta entre 0 y 100", n);

    } else {

        printf("%d no esta entre 0 y 100", n);

    }

return 0;
}
