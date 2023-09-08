//Willian Chapid
//8965113
#include <stdio.h>

int mayuscula(char c) {
    return (c >= 'A' && c <= 'Z');
}

int main() {
    char c;
    printf("Ingrese una letra: ");
    scanf(" %c", &c);
    if (mayuscula(c)) {
        printf("Es mayuscula\n");
    } else {
        printf("No es mayuscula\n");
    }
    return 0;
}
