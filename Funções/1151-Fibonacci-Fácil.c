#include <stdio.h>

int main() {
    int termos, anterior = 0, atual = 1, proximo;

    scanf("%d", &termos);

    for (int i = 0; i < termos; i++) {
        if (i == 0)
            printf("%d", anterior);
        else if (i == 1)
            printf(" %d", atual);
        else {
            proximo = anterior + atual;
            printf(" %d", proximo);
            anterior = atual;
            atual = proximo;
        }
    }

    printf("\n");
    return 0;
}
