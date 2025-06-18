#include <stdio.h>
#include <math.h>

int main() {
    int T;
    printf("Digite o número de casos de teste: ");
    scanf("%d", &T);

    for (int i = 1; i <= T; i++) {
        long long N;
        printf("Digite o valor de N para o caso #%d: ", i);
        scanf("%lld", &N);

        long long raiz = ceil(sqrt((double)N));
        long long resultado = raiz * raiz;

        printf("Caso #%d: %lld\n", i, resultado);
    }

    return 0;
}
