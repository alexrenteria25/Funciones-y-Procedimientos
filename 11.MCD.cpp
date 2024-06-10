#include <stdio.h>

int main() {
    // Declaración de variables
    int numero1, numero2;

    // Solicitar al usuario que ingrese los dos números
    printf("Ingrese el primer numero: ");
    scanf("%d", &numero1);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &numero2);

    // Encontrar el MCD
    int mcd = 1; // Inicializamos el MCD con 1

    // Determinamos el rango máximo para iterar (el mínimo de los dos números)
    int rango_max = (numero1 < numero2) ? numero1 : numero2;

    // Iteramos desde 1 hasta el rango máximo para encontrar el MCD
    for (int i = 1; i <= rango_max; ++i) {
        if (numero1 % i == 0 && numero2 % i == 0) {
            mcd = i; // Actualizamos el MCD si encontramos un divisor común
        }
    }

    // Mostrar el resultado
    printf("El MCD de %d y %d es: %d\n", numero1, numero2, mcd);

    return 0;
}