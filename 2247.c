#include<stdio.h>

int main() {

    int n, t = 1;

    while (scanf("%d", &n) == 1 && n > 0) {

        printf("Teste %d\n", t++);

        int s = 0, j, z;

        while (n--) {
            scanf("%d %d", &j, &z);
            s += (j - z);
            printf("%d\n", s);
        }

        printf("\n");

    }

    return 0;
}
