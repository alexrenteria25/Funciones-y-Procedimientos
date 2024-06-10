#include <stdio.h>

int factorial(int n) {
    int resultado = 1;

    for (int i = 1; i <= n; ++i) {
        resultado *= i;
    }

    return resultado;
}

int main() {
    int numero;
    // Solicitar al usuario que ingrese el numero a calcular su factorial
    printf("Ingrese un numero para calcular su factorial: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("No se puede calcular el factorial de un numero negativo.\n");
    } else {
        printf("El factorial de %d es: %d\n", numero, factorial(numero));
    }

    return 0;
}