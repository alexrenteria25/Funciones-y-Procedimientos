#include <stdio.h>

int main() {
    // Declaración de variables
    int n, suma = 0;

    // Solicitar al usuario que ingrese el número n
    printf("Ingrese un numero: ");
    scanf("%d", &n);

    // Calcular la suma de los cubos de los primeros n números
    for (int i = 1; i <= n; ++i) {
        suma += i * i * i; // Sumar el cubo del número actual a la suma total
    }

    // Mostrar el resultado
    printf("La suma de los cubos de los primeros %d numeros es: %d\n", n, suma);

    return 0;
}