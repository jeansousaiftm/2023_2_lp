#include<stdio.h>

int main() {

    int n, x, i;

    scanf("%d", &n);

    int p = n;

    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        if (x < 65 && p == n) {
            p = i;
        }
    }

    scanf("%d", &x);

    if (x < 65) {
        printf("%d\n", n + 1);
    } else {
        printf("%d\n", p + 1);
    }

    return 0;
}
