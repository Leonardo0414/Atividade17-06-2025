#include <stdio.h>

void verificar_paridade(int numero) {
    if (numero == 0)
        printf("NULL\n");
    else if (numero % 2 == 0 && numero > 0)
        printf("EVEN POSITIVE\n");
    else if (numero % 2 == 0 && numero < 0)
        printf("EVEN NEGATIVE\n");
    else if (numero % 2 != 0 && numero > 0)
        printf("ODD POSITIVE\n");
    else
        printf("ODD NEGATIVE\n");
}

int main() {
    int quantidade, numero;

    scanf("%d", &quantidade);

    for (int i = 0; i < quantidade; i++) {
        scanf("%d", &numero);
        verificar_paridade(numero);
    }

    return 0;
}
