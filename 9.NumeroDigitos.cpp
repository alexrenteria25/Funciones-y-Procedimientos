#include <stdio.h>

int main() {
    // Declaración de variables
    int numero, contador = 0;

    // Solicitar al usuario que ingrese un número
    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    // Manejo del caso especial cuando el número es 0
    if(numero == 0) {
        contador = 1;
    }
    else {
        // Contar los dígitos del número
        while (numero != 0) {
            numero /= 10; // Dividir el número entre 10 para eliminar un dígito
            contador++;   // Incrementar el contador de dígitos
        }
    }

    // Mostrar el número de dígitos
    printf("El numero de digitos es: %d\n", contador);

    return 0;
}