#include <stdio.h>

int main() {
    int notas[] = {100, 50, 20, 10, 5, 2};
    int moedas[] = {100, 50, 25, 10, 5, 1};
    int quantidade, i;

    double valor;
    int parte_inteira, parte_centavos;

    printf("Digite um valor com centavos: ");
    scanf("%lf", &valor);

    parte_inteira = (int)valor;
    parte_centavos = (int)((valor - parte_inteira) * 100 + 0.5);

    printf("\nMenor quantidade de notas e moedas:\n");
    printf("NOTAS:\n");
    for (i = 0; i < 6; i++) {
        quantidade = parte_inteira / notas[i];
        parte_inteira %= notas[i];
        printf("%d nota(s) de R$ %d.00\n", quantidade, notas[i]);
    }

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", parte_inteira);

    for (i = 0; i < 5; i++) {
        quantidade = parte_centavos / moedas[i+1];
        parte_centavos %= moedas[i+1];
        printf("%d moeda(s) de R$ %.2f\n", quantidade, moedas[i+1] / 100.0);
    }

    return 0;
}

