//Willian Chapid
//8965113

#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int num;
    printf("Ingrese un número: ");
    scanf("%d", &num);
    if (isPrime(num)) {
        printf("Es primo.\n");
    } else {
        printf("No esprimo.\n");
    }

    return 0;
}
