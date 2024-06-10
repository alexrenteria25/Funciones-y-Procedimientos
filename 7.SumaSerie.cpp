#include <stdio.h>

int main() {
    // Solicitar al usuario el primer termino, la diferencia y el numero de terminos
    int primer_termino, diferencia, n;
    float suma = 0;

    printf("Ingrese el primer termino de la serie aritmetica: ");
    scanf("%d", &primer_termino);

    printf("Ingrese la diferencia entre terminos consecutivos: ");
    scanf("%d", &diferencia);

    printf("Ingrese el numero de terminos de la serie: ");
    scanf("%d", &n);

    // Calcular la suma de la serie aritmetica
    for (int i = 0; i < n; ++i) {
        suma += primer_termino + i * diferencia;
    }

    // Mostrar el resultado
    printf("La suma de la serie aritmetica es: %.2f\n", suma);

    return 0;
}