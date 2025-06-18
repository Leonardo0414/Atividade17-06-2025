#include <stdio.h>

int eh_primo(int numero) {
    if (numero < 2) return 0;
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int testes, numero;
    scanf("%d", &testes);

    for (int i = 0; i < testes; i++) {
        scanf("%d", &numero);

        if (eh_primo(numero))
            printf("%d eh primo\n", numero);
        else
            printf("%d nao eh primo\n", numero);
    }

    return 0;
}
