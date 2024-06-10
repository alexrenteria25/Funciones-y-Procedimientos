#include <stdio.h>

int main() {
    // Declaración de variables
    int n, suma = 0;

    // Solicitar al usuario que ingrese el número n
    printf("Ingrese un numero: ");
    scanf("%d", &n);

    // Calcular la suma de los números impares hasta n
    for (int i = 1; i <= n; i += 2) {
        suma += i; // Sumar el número impar actual a la suma total
    }

    // Mostrar el resultado
    printf("La suma de los numeros impares hasta %d es: %d\n", n, suma);

    return 0;
}