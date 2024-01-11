#include <stdio.h>

#define MAX(X,Y,Z) (X>Y && X>Z)? 1:0

int main () {

    int a, b, c;
    printf("Ingrese 3 numeros \n");
    scanf("%d%d%d", &a, &b, &c);
    if (MAX(a,b,c)>0) {

        printf("%d es el mayor de los 3", a);

    } else {

        if (MAX(b,a,c)>0) {

            printf("%d es el mayor de los 3", b);

        } else {

            printf("%d es el mayor de los 3", c);

        }

    }

return 0;
}
