#include <stdio.h>

int main() {
    // Declaración de variables
    int numero, es_primo = 1; // Suponemos que el número es primo inicialmente

    // Solicitar al usuario que ingrese un número
    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    // Caso especial para 0 y 1 que no son primos
    if (numero <= 1) {
        es_primo = 0;
    }
    else {
        // Comprobar si el número es divisible por algún número menor que él
        for (int i = 2; i * i <= numero; ++i) {
            if (numero % i == 0) {
                es_primo = 0; // Si es divisible por algún número, entonces no es primo
                break;
            }
        }
    }

    // Mostrar el resultado
    if (es_primo) {
        printf("%d es un numero primo.\n", numero);
    } else {
        printf("%d no es un numero primo.\n", numero);
    }

    return 0;
}