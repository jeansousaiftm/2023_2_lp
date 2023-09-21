#include<stdio.h>
#define MAX 100001

int main() {

    int a, v, i, x, y, t = 1;

    while (scanf("%d %d", &a, &v) && a + v > 0) {

        int voos[a + 1];

        for (i = 0; i <= a; i++) {
            voos[i] = 0;
        }

        for (i = 0; i < v; i++) {
            scanf("%d %d", &x, &y);
            voos[x]++;
            voos[y]++;
        }

        int maior = 0;

        for (i = 0; i <= a; i++) {
            if (voos[i] > maior) {
                maior = voos[i];
            }
        }

        printf("Teste %d\n", t++);

        for (i = 0; i <= a; i++) {
            if (voos[i] == maior) {
                printf("%d ", i);
            }
        }

        printf("\n\n");

    }

    return 0;
}

