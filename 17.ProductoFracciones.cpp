#include <stdio.h>

int main() {
    // Declaración de variables
    int n;
    float suma = 0.0;

    // Solicitar al usuario que ingrese el número n
    printf("Ingrese un numero: ");
    scanf("%d", &n);

    // Calcular la suma de la serie fraccionaria
    for (int i = 1; i <= n; ++i) {
        suma += 1.0 / i; // Sumar el inverso del número actual a la suma total
    }

    // Mostrar el resultado
    printf("La suma de la serie fraccionaria hasta el %d-esimo termino es: %.2f\n", n, suma);

    return 0;
}