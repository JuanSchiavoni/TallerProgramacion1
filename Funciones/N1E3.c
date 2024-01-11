#include <stdio.h>

int main () {
    triangulo();
    return 0;
}

void triangulo () {
    float a, b, c;
    printf("Ingrese la medida del primer lado: \n");
    scanf("%f", &a);

    printf("Ingrese la medida del segundo lado: \n");
    scanf("%f", &b);

    printf("Ingrese la medida del tercer lado: \n");
    scanf("%f", &c);

    if(a+b>c && (a+c)>b && (b+c)>a) {
        printf("El triangulo de lados %.2f, %.2f y %.2f es posible\n", a, b, c);
    }else {
        printf("El tirangulo de lados %.2f, %.2f y %.2f no es posible\n", a, b ,c);
    }

}
