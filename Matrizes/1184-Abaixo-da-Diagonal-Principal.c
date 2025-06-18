#include <stdio.h>

int main() {
    double matriz[12][12];
    char operacao;
    double resultado = 0;
    int contador = 0;

    scanf(" %c", &operacao);

    for (int i = 0; i < 12; i++)
        for (int j = 0; j < 12; j++)
            scanf("%lf", &matriz[i][j]);

    for (int i = 1; i < 12; i++)
        for (int j = 0; j < i; j++) {
            resultado += matriz[i][j];
            contador++;
        }

    if (operacao == 'M')
        resultado /= contador;

    printf("%.1lf\n", resultado);
    return 0;
}
