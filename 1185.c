#include<stdio.h>
#define N 12

/*
diagonal principal i == j
abaixo da diagonal principal i > j
acima da diagonal princial i < j

diagonal secundaria i + j == N - 1
abaixo da diagonal secundaria i + j > N - 1
acima da diagonal secundaria i + j < N - 1
*/

int main() {
    int i, j, qtd = 0;
    double soma = 0, m[N][N];
    char o;
    scanf("%c", &o);
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            scanf("%lf", &m[i][j]);
            if (i + j < N - 1) {
                soma += m[i][j];
                qtd++;
            }
        }
    }
    switch (o) {
        case 'S':
            printf("%.1lf\n", soma);
            break;
        case 'M':
            printf("%.1lf\n", soma / qtd);
            break;
    }
    /*if (o == 'S') {
        printf("%.1lf\n", soma);
    } else {
        printf("%.1lf\n", soma / qtd);
    }*/
    return 0;
}
