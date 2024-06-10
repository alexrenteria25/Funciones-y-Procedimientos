#include <stdio.h>

// Función para calcular el factorial de un número
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        int fact = 1;
        for (int i = 2; i <= n; ++i) {
            fact *= i;
        }
        return fact;
    }
}

int main() {
    // Declaración de variables
    int n;

    // Solicitar al usuario que ingrese el valor de n
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    // Inicializar la suma de los factoriales
    int suma_factoriales = 0;

    // Calcular la suma de los factoriales de los primeros n números
    for (int i = 1; i <= n; ++i) {
        suma_factoriales += factorial(i);
    }

    // Mostrar el resultado
    printf("La suma de los factoriales de los primeros %d numeros es: %d\n", n, suma_factoriales);

    return 0;
}