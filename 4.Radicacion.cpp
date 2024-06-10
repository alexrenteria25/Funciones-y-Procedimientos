#include <stdio.h>

float raizCubica(float num) {
    float estimacion = 0;
    float incremento = 0.001; // El incremento puede ser ajustado según la precisión necesaria

    while (estimacion * estimacion * estimacion < num) {
        estimacion += incremento;
    }

    return estimacion;
}

int main() {
    float numero;
    printf("Ingrese un numero para calcular su raiz cubica: ");
    scanf("%f", &numero);

    printf("La raiz cubica de %.2f es aproximadamente: %.2f\n", numero, raizCubica(numero));
    
    return 0;
}
