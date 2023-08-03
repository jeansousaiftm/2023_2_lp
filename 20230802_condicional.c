#include<stdio.h>

int main() {

    double nota, frequencia;

    scanf("%lf %lf", &nota, &frequencia);

    if (nota >= 60 && frequencia >= 75) {
        printf("Aprovado\n");
    } else if (frequencia < 75) {
        printf("Reprovado por Infrequencia\n");
    } else {
        printf("Reprovado por Nota\n");
    }

    return 0;
}
