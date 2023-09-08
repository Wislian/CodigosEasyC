//Willian Chapid
//8965113

#include <stdio.h>

double potencia(double base, int exponente) {
    if (exponente == 0) {
        return 1;
    } else if (exponente > 0) {
        return base * potencia(base, exponente - 1);
    } else {
        return 1 / (base * potencia(base, -exponente - 1));
    }
}

int main() {
    double base;
    int exponente;
    printf("Ingrese la base: ");
    scanf("%lf", &base);
    printf("Ingrese el exponente: ");
    scanf("%d", &exponente);
    int ans = potencia(base, exponente);
    printf("%lf ^ %d = %ld\n", base, exponente, ans);
    return 0;
}
