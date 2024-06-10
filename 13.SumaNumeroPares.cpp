#include <stdio.h>

int main() {
    // Declaración de variables
    int n, suma = 0;

    // Solicitar al usuario que ingrese el número n
    printf("Ingrese un numero: ");
    scanf("%d", &n);

    // Calcular la suma de los números pares hasta n
    for (int i = 2; i <= n; i += 2) {
        suma += i; // Sumar el número par actual a la suma total
    }

    // Mostrar el resultado
    printf("La suma de los numeros pares hasta %d es: %d\n", n, suma);

    return 0;
}