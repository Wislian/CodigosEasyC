//Willian Chapid
//8965113

#include <stdio.h>

int esBisiesto(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1;
    }
    return 0;
}

int main() {
    int year;
    printf("Ingrese un año: ");
    scanf("%d", &year);

    if (esBisiesto(year)) {
        printf("Es bisiesto.\n");
    } else {
        printf("No es bisiesto.\n");
    }

    return 0;
}
