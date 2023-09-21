#include<stdio.h>

int main() {

    int n, i, q = 0;

    scanf("%d", &n);
    int r[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &r[i]);
    }

    for (i = 1; i < n; i++) {
        if (r[i] < r[i - 1]) {
            q = i + 1;
            break;
        }
    }

    printf("%d\n", q);

    return 0;
}
