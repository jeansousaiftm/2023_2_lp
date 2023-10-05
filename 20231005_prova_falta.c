#include<stdio.h>

int main() {

    int n, i, x;

    scanf("%d", &n);

    int c[n + 1];

    for (i = 1; i <= n; i++) {
        c[i] = 0;
    }

    for (i = 0; i < n - 1; i++) {
        scanf("%d", &x);
        c[x]++;
    }

    for (i = 1; i <= n; i++) {
        if (c[i] == 0) {
            printf("%d\n", i);
            return 0;
        }
    }

    return 0;
}
