#include <stdio.h>

int main() {
    // Declaración de variables
    int n, contador = 0;

    // Solicitar al usuario que ingrese el número n
    printf("Ingrese un numero: ");
    scanf("%d", &n);

    // Comprobar si cada número hasta n es primo
    for (int numero = 2; numero <= n; ++numero) {
        int es_primo = 1; // Suponemos que el número es primo inicialmente

        // Verificar si el número es primo
        for (int i = 2; i * i <= numero; ++i) {
            if (numero % i == 0) {
                es_primo = 0; // Si es divisible por algún número, entonces no es primo
                break;
            }
        }

        // Si el número es primo, incrementamos el contador
        if (es_primo) {
            contador++;
        }
    }

    // Mostrar el resultado
    printf("El numero de numeros primos hasta %d es: %d\n", n, contador);

    return 0;
}