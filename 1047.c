#include<stdio.h>
#define MINUTOS_DIA 1440

int main() {

    int h1, m1, h2, m2, t1, t2, duracao;

    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);

    t1 = h1 * 60 + m1;
    t2 = h2 * 60 + m2;

    if (t1 < t2) {
        duracao = t2 - t1;
    } else {
        duracao = (MINUTOS_DIA - t1) + t2;
    }

    int hf = duracao / 60;
    int mf = duracao % 60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hf, mf);

    return 0;
}
