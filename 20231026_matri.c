#include<stdio.h>
#define N 3

int main() {

    int m[N][N];
    int i, j, somaDP = 0;
    int somaLinhas[N];

    for (i = 0; i < N; i++) {
        somaLinhas[i] = 0;
    }

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &m[i][j]);
            if (i == j) {
                somaDP += m[i][j];
            }
            somaLinhas[i] += m[i][j];
        }
    }

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    printf("%d\n", somaDP);

    for (i = 0; i < N; i++) {
        printf("%d\n", somaLinhas[i]);
    }

    return 0;
}
