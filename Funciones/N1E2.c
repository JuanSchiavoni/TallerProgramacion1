#include <stdio.h>

int main () {
    celFar();
    farCel();
    return 0;
}

void celFar (float far) {
    float cel;
    printf("Ingrese la temperatura en grados Celcius: \n");
    scanf("%f", &cel);
    far = (cel * 1.8) + 32;
    printf("La temperatura en Farenheit es: %.2f\n", far);
}

void farCel (float cel1) {
    float far1;
    printf("Ingrese la temperatura en Farenheit: \n");
    scanf("%f", &far1);
    cel1 = (far1-32) * 0.5556;
    printf("La temperatura en Celcius es: %.2f\n", cel1);
}
