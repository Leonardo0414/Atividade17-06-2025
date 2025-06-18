#include <stdio.h>

int main() {
    double matriz[12][12];
    int linha;
    char operacao;

    scanf("%d", &linha);
    scanf(" %c", &operacao);

    for (int i = 0; i < 12; i++)
        for (int j = 0; j < 12; j++)
            scanf("%lf", &matriz[i][j]);

    double resultado = 0;
    for (int j = 0; j < 12; j++)
        resultado += matriz[linha][j];

    if (operacao == 'M')
        resultado /= 12;

    printf("%.1lf\n", resultado);
    return 0;
}
