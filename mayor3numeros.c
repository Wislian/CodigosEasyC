//Willian Chapid
//8965113

#include <stdio.h>

int main() {
    int num1, num2, num3;
    printf("Ingrese 3 numeros: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    int max = num1;
    if (num2 > max) {
        max = num2;
    }
    if (num3 > max) {
        max = num3;
    }
    printf("El numero mayor es: %d\n", max);
    return 0;
}
