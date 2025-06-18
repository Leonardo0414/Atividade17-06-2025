#include <stdio.h>

int main() {
    int numero, vetor[100];

    scanf("%d", &numero);

    for (int i = 0; i < 100; i++) {
        vetor[i] = i % numero;
        printf("N[%d] = %d\n", i, vetor[i]);
    }

    return 0;
}
