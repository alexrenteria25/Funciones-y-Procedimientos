#include <stdio.h>

int main() {
    int n;
    
    // Solicitar al usuario que ingrese el número de elementos de la serie de Fibonacci a mostrar
    printf("Ingrese el numero de elementos de la serie de Fibonacci: ");
    scanf("%d", &n);

    // Inicializar los primeros dos elementos de la serie de Fibonacci
    int first = 0, second = 1;
    
    // Mostrar los elementos de la serie de Fibonacci
    printf("Los primeros %d elementos de la serie de Fibonacci son:\n", n);
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            printf("%d ", first);
        } else if (i == 1) {
            printf("%d ", second);
        } else {
            int next = first + second;
            printf("%d ", next);
            first = second;
            second = next;
        }
    }
    
    printf("\n");
    
    return 0;
}