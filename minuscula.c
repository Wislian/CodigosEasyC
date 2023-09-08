//Willian Chapid
//8965113

#include <stdio.h>

int minuscula(char c) {
    return (c >= 'a' && c <= 'z');
}

int main() {
    char c;
    printf("Ingrese una letra: ");
    scanf(" %c", &c);
    if (minuscula(c)) {
        printf("Es minuscula\n");
    } else {
        printf("No es minuscula\n");
    }
    return 0;
}
