//Willian Chapid
//8965113

#include <stdio.h>

int main() {
    int num1, tem2;
    double num2, tem1;
    printf("Ingrese un numero entero y un numero double: ");
    scanf("%d %lf", &num1, &num2);
    tem1 = num1;
    printf("Conversión implícita: %lf\n", tem1);
    tem2 = (int)num2;
    printf("Conversión explícita: %d\n", tem2);
    return 0;
}
