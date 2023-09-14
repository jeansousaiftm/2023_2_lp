#include<stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    double notas[n];
    for (i = 0; i < n; i++) {
        scanf("%lf", &notas[i]);
    }
    for (i = 0; i < n; i++) {
        if (notas[i] >= 6) {
            printf("Aluno %d aprovado\n", i);
        } else {
            printf("Aluno %d reprovado\n", i);
        }
    }
    return 0;
}
