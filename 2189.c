#include<stdio.h>

int main() {
    int n, i, x, t = 1;
    while (scanf("%d", &n) == 1 && n > 0) {
        for (i = 1; i <= n; i++) {
            scanf("%d", &x);
            if (x == i) {
                printf("Teste %d\n", t++);
                printf("%d\n\n", x);
            }
        }
    }
    return 0;
}
