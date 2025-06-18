#include <stdio.h>
#include <stdlib.h>

int maior(int a, int b) {
    return (a + b + abs(a - b)) / 2;
}

int main() {
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);

    int maior_entre_tres = maior(maior(x, y), z);
    printf("%d eh o maior\n", maior_entre_tres);

    return 0;
}
