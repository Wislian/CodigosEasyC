//Willian Chapid
//8965113
#include <stdio.h>

int esPar(int num) {
    return num % 2 == 0;
}

int main() {
    int num;
    printf("Ingrese un número: ");
    scanf("%d", &num);

    if (esPar(num)) {
        printf("Es par\n");
    } else {
        printf("Es un impar\n");
    }

    return 0;
}
