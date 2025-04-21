#include <stdio.h>

int main() {
    int numero;

   
    printf("Introduce un número entero positivo: ");
    scanf("%d", &numero);

   
    if (numero <= 0) {
        printf("El número debe ser positivo.\n");
        return 1; 

 
    printf("Tabla de multiplicar del %d:\n", numero);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0; 
    }
    
}