#include <stdio.h>

#define CONSEC(X,Y) (X==Y+1 || X==Y-1)? 1:0

int main () {

    int a, b;
    printf("Ingrese dos numeros: \n");
    scanf("%d%d", &a, &b);
    if (CONSEC(a,b)>0) {

        printf("%d y %d son consecutivos", a, b);

    } else {

        printf("%d y %d no son consecutivos");

    }

return 0;
}
