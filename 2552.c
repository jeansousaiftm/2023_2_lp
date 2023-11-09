#include<stdio.h>

int main() {
    int n, m;
    while (scanf("%d %d", &n, &m) != EOF) {
        int i, j, x;
        int c[n][m];
        for (i = 0; i < n; i++) {
            for (j = 0; j < m; j++) {
                c[i][j] = 0;
            }
        }
        for (i = 0; i < n; i++) {
            for (j = 0; j < m; j++) {
                scanf("%d", &x);
                if (x == 1) {
                    c[i][j] = 9;
                    if (i > 0) {
                        c[i - 1][j]++;
                    }
                    if (i < n - 1) {
                        c[i + 1][j]++;
                    }
                    if (j > 0) {
                        c[i][j - 1]++;
                    }
                    if (j < m - 1) {
                        c[i][j + 1]++;
                    }
                }
            }
        }
        for (i = 0; i < n; i++) {
            for (j = 0; j < m; j++) {
                c[i][j] = (c[i][j] > 9) ? 9 : c[i][j];
                /*if (c[i][j] > 9) {
                    c[i][j] = 9;
                } else {
                    c[i][j] = c[i][j];
                }*/
                printf("%d", c[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
