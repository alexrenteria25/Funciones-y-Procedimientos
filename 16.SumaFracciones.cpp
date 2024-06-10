#include <stdio.h>

int main() {
    int n;
    double suma = 0.0;

    // Solicitar al usuario que introduzca un número
    printf("Introduce un numero: ");
    scanf("%d", &n);

    // Calcular la suma de la serie usando un ciclo for
    printf("Serie de numeros fraccionarios:\n");
    for (int i = 1; i <= n; i++) {
        suma += 1.0 / i;
        printf("1/%d ", i);
        if (i < n) {
            printf("+ ");
        }
    }

    // Mostrar el resultado
    printf("\nLa suma de la serie de numeros fraccionarios hasta 1/%d es: %.4lf\n", n, suma);

    return 0;
}