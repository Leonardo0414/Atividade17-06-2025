#include <stdio.h>

int calcular_fatorial(int numero) {
    int resultado = 1;
    for (int i = 1; i <= numero; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int valor;
    scanf("%d", &valor);
    printf("%d\n", calcular_fatorial(valor));
    return 0;
}
