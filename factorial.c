//Willian Chapid
//8965113

#include <stdio.h>

int calculateFactorial(int n){
    int ans = n;
    while( n>1 ){
        ans = ans*--n;
    }
    return ans;
}

int main() {
    int num;
    printf("Ingrese un número: ");
    scanf("%d", &num);
    printf("El factorial de %d es %d.\n", num, calculateFactorial(num));
    return 0;
}
