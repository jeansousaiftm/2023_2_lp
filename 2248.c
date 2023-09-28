#include<stdio.h>

int main() {

    int n, t = 1;

    while (scanf("%d", &n) == 1 && n > 0) {

        int alunos[n], notas[n], i;

        for (i = 0; i < n; i++) {
            scanf("%d %d", &alunos[i], &notas[i]);
        }

        int maior = notas[0];

        for (i = 1; i < n; i++) {
            if (notas[i] > maior) {
                maior = notas[i];
            }
        }

        printf("Turma %d\n", t++);

        for (i = 0; i < n; i++) {
            if (notas[i] == maior) {
                printf("%d ", alunos[i]);
            }
        }

        printf("\n\n");

    }

    return 0;
}
