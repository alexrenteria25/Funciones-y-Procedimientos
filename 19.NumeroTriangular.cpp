#include <stdio.h>

int main() {
    // Declaración de variables
    int n;

    // Solicitar al usuario que ingrese el valor de n
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    // Inicializar la suma del enésimo número triangular
    int numero_triangular = 0;

    // Calcular el enésimo número triangular utilizando un ciclo for
    for (int i = 1; i <= n; ++i) {
        numero_triangular += i;
    }

    // Mostrar el resultado
    printf("El %d-esimo numero triangular es: %d\n", n, numero_triangular);

    return 0;
}