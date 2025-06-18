#include <stdio.h>

int calcular_duracao(int h_inicial, int m_inicial, int h_final, int m_final) {
    int inicio = h_inicial * 60 + m_inicial;
    int fim = h_final * 60 + m_final;
    int duracao = fim - inicio;

    if (duracao <= 0)
        duracao += 24 * 60;

    return duracao;
}

int main() {
    int hora_inicio, minuto_inicio, hora_fim, minuto_fim;
    printf("Digite hora e minuto de início: ");
    scanf("%d %d", &hora_inicio, &minuto_inicio);
    printf("Digite hora e minuto de fim: ");
    scanf("%d %d", &hora_fim, &minuto_fim);

    int duracao = calcular_duracao(hora_inicio, minuto_inicio, hora_fim, minuto_fim);
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duracao / 60, duracao % 60);
    
    return 0;
}
