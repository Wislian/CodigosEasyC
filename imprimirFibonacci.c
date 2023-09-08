//Willian Chapid
//8965113

#include <stdio.h>

int main() {
    int n;
    printf("Ingrese numero:");
    scanf("%d", &n);

    int a = 0;
    int b = 1;
    printf("Serie de Fibonacci:\n");

    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        int temp = a;
        a = b;
        b = temp + b;
    }
    printf("\n");
    return 0;
}
