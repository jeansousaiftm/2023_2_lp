#include<stdio.h>

int main() {

    int notas[] = { 2, 5, 10, 20, 50, 100 };
    int trocos[36];
    int i, j, x = 0;
    int p, t;

    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            trocos[x++] = notas[i] + notas[j];
        }
    }

    while (scanf("%d %d", &p, &t) == 2 && p + t > 0) {

        int achou = 0;

        for (i = 0; i < 36; i++) {
            if (t - p == trocos[i]) {
                printf("possible\n");
                achou = 1;
                break;
            }
        }

        if (achou == 0) {
            printf("impossible\n");
        }
    }

    return 0;
}
