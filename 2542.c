#include<stdio.h>
int main() {
    int n, m, l, i, j;
    while (scanf("%d", &n) != EOF) {
        scanf("%d %d", &m, &l);
        int cm[m][n];
        int cl[l][n];
        for (i = 0; i < m; i++) {
            for (j = 0; j < n; j++) {
                scanf("%d", &cm[i][j]);
            }
        }
        for (i = 0; i < l; i++) {
            for (j = 0; j < n; j++) {
                scanf("%d", &cl[i][j]);
            }
        }
        int me, le, ae;
        scanf("%d %d %d", &me, &le, &ae);
        if (cm[me - 1][ae - 1] > cl[le - 1][ae - 1]) {
            printf("Marcos\n");
        } else if (cm[me - 1][ae - 1] < cl[le - 1][ae - 1]) {
            printf("Leonardo\n");
        } else {
            printf("Empate\n");
        }
    }
    return 0;
}
