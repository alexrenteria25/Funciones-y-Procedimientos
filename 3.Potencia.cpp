#include <stdio.h>

int main() {
    int base, exponente, resultado = 0;
    
    // Solicitar al usuario que ingrese la base y el exponente
    printf("Ingrese la base: ");
    scanf("%d", &base);
    printf("Ingrese el exponente: ");
    scanf("%d", &exponente);
    
    // Variable para realizar sumas sucesivas
    int parcial = 0;
    
    // Calcular la potencia mediante sumas sucesivas
    for (int i = 0; i < exponente; i++) {
        parcial = 0;
        for (int j = 0; j < base; j++) {
            parcial += resultado;
        }
        if (i == 0) {
            parcial = base; // La primera iteración es solo la base
        }
        resultado = parcial;
        printf("Suma parcial despues de %d repeticiones: %d\n", i + 1, resultado);
    }
    
    // Imprimir el resultado final
    printf("El resultado de %d^%d es: %d\n", base, exponente, resultado);
    
    return 0;
}