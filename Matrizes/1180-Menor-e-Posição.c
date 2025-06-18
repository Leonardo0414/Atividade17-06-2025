#include <stdio.h>

int main() {
    int quantidade, menor_valor, posicao_menor;

    printf("Quantos números deseja inserir? ");
    scanf("%d", &quantidade);

    int numeros[quantidade];

    for (int i = 0; i < quantidade; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &numeros[i]);

        if (i == 0 || numeros[i] < menor_valor) {
            menor_valor = numeros[i];
            posicao_menor = i;
        }
    }

    printf("Menor valor: %d\n", menor_valor);
    printf("Posicao: %d\n", posicao_menor);

    return 0;
}
