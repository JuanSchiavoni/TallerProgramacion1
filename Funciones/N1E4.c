#include <stdio.h>

int main() {
    pesodolar();
    chileno();
    return 0;
}

void pesodolar() {
    float peso, dolar;
    printf("Ingrese la cantidad de pesos a convertir a dolares: \n");
    scanf("%f", &peso);
    dolar = peso * 0.0076;
    printf("%.4f pesos son -> %.4f dolares \n", peso, dolar);
}

void chileno() {
    float pesoa, pesoc;
    printf("Ingrese la cantidad de pesos a convertir a pesos chilenos: \n");
    scanf("%f", &pesoa);
    pesoc = pesoa * 6.87;
    printf("%.4f pesos son -> %.4f pesos chilenos \n", pesoa, pesoc);
}
