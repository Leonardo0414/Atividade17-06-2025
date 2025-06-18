#include <stdio.h>

void preencher_vetor(int *vetor, int valor_inicial) {
    vetor[0] = valor_inicial;
    for (int i = 1; i < 10; i++) {
        vetor[i] = vetor[i - 1] * 2;
    }
}

int main() {
    int valor, vetor[10];

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    preencher_vetor(vetor, valor);

    printf("Vetor preenchido:\n");
    for (int i = 0; i < 10; i++) {
        printf("N[%d] = %d\n", i, vetor[i]);
    }

    return 0;
}
