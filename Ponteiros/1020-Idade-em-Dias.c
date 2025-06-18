#include <stdio.h>

void calcular_idade(int dias, int *anos, int *meses, int *resto_dias) {
    *anos = dias / 365;
    dias %= 365;
    *meses = dias / 30;
    *resto_dias = dias % 30;
}

int main() {
    int total_dias, anos, meses, dias;

    scanf("%d", &total_dias);

    calcular_idade(total_dias, &anos, &meses, &dias);

    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);

    return 0;
}
