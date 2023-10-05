#include<stdio.h>

int main() {

    int n, x, i;

    scanf("%d", &n);

    int v[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    scanf("%d", &x);

    if (x < 65) {
        printf("%d\n", n + 1);
    } else {
        for (i = 0; i < n; i++) {
            if (v[i] < 65) {
                printf("%d\n", i + 1);
                return 0;
            }
        }
    }

    return 0;
}
