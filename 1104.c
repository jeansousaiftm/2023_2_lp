#include<stdio.h>
#define MAX 100001

int main() {

    int ca, cb, i, x;

    while (scanf("%d %d", &ca, &cb) && ca + cb > 0) {

        int a[MAX], b[MAX];

        for (i = 0; i < MAX; i++) {
            a[i] = 0;
            b[i] = 0;
        }

        for (i = 0; i < ca; i++) {
            scanf("%d", &x);
            a[x]++;
        }

        for (i = 0; i < cb; i++) {
            scanf("%d", &x);
            b[x]++;
        }

        /*for (i = 0; i <= 15; i++) {
            printf("%2d ", a[i]);
        }
        printf("\n");

        for (i = 0; i <= 15; i++) {
            printf("%2d ", b[i]);
        }
        printf("\n");*/

        int ta = 0, tb = 0;

        for (i = 0; i < MAX; i++) {

            if (a[i] > 0 && b[i] == 0) {
                ta++;
            }

            if (b[i] > 0 && a[i] == 0) {
                tb++;
            }

        }

        if (ta < tb) {
            printf("%d\n", ta);
        } else {
            printf("%d\n", tb);
        }

    }

    return 0;
}
