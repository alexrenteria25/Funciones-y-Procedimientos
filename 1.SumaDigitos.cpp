#include <stdio.h>

int main() {
    int number, sum = 0;
    
    // Solicitamos al usuario que ingrese cualquier numero
    printf("Ingrese un numero: ");
    scanf("%d", &number);
    
    // Bucle while para sumar los dígitos
    while (number != 0) {
        // Extraer el último dígito del número y sumarlo
        sum += number % 10;
        // Eliminar el último dígito del número
        number /= 10;
    }
    
    // Mostramos el resultado al usuario
    printf("La suma de los dígitos es: %d\n", sum);
    
    return 0;
}