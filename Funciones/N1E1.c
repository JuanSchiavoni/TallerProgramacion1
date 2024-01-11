#include <stdio.h>


int main () {
    int dm, hm;
    dm= diasMins(dm);
    hm= horasMins(hm);
    printf("La cantidad de minutos es de: %d", dm+hm);
    return 0;
}

int diasMins(int minsd) {
    int dias;
    do {
    printf("Ingrese la cantidad de dias:\n");
    printf("<La cantidad de dias debe ser mayor o igual a 0>\n");
    scanf("%d", &dias);
    minsd = dias * 1440;
    }while (dias<0);
    return minsd;
}

int horasMins(int minsh) {
    int horas;
    do {
    printf("Ingrese la cantidad de horas:\n");
    printf("<La cantidad de horas debe ser mayor o igual a o>\n");
    scanf("%d", &horas);
    minsh = horas * 60;
    }while (horas<0);
    return minsh;
}
