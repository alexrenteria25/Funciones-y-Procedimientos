#include <stdio.h>

int main() {
    int number, reversed = 0;
    
    // Solicitar al usuario que ingrese un numero
    printf("Ingrese un numero: ");
    scanf("%d", &number);
    
    // Bucle while para invertir los dígitos
    while (number != 0) {
        // Extraer el ultimo digito del númerouy agregarlo al numero invertido
        reversed = reversed * 10 + number % 10;
        // Eliminar el último digito del numero
        number /= 10;
    }
    
    // Imprimir el resultado
    printf("El inverso del numero es: %d\n", reversed);
    
    return 0;
}
