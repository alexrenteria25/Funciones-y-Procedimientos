#include <stdio.h>

int main() {
    // Solicitar al usuario el primer término, la razón y el número de términos
    int primer_termino, razon, n;
    int producto = 1;

    printf("Ingrese el primer termino de la serie geometrica: ");
    scanf("%d", &primer_termino);

    printf("Ingrese la razon entre terminos consecutivos: ");
    scanf("%d", &razon);

    printf("Ingrese el numero de terminos de la serie: ");
    scanf("%d", &n);

    // Calcular el producto de la serie geometrica
    for (int i = 0; i < n; ++i) {
        int potencia = 1;
        for (int j = 0; j < i; ++j) {
            potencia *= razon;
        }
        producto *= primer_termino * potencia;
    }

    // Mostrar el resultado
    printf("El producto de la serie geometrica es: %d\n", producto);

    return 0;
}