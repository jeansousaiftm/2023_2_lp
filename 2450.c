#include<stdio.h>
int main() {
    char r = 'S';
    int n, m, i, j, colunaLimite = -1;
    scanf("%d %d", &n, &m);
    int matriz[n][m];
    for (i = 0; i < n; i++) {
        int leuNaoZero = 0;
        for (j = 0; j < m; j++) {
            scanf("%d", &matriz[i][j]);
            if (matriz[i][j] != 0 && j < colunaLimite) {
                r = 'N';
            }
            if (matriz[i][j] != 0 && leuNaoZero == 0) {
                leuNaoZero = 1;
                if (j == 0) continue;
                colunaLimite = j + 1;
            }
        }
        if (leuNaoZero == 0) {
            colunaLimite = m + 1;
        }
    }
    printf("%c\n", r);
    return 0;
}
