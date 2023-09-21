#include<stdio.h>

int main() {

    int n, i, r = 1;

    scanf("%d", &n);
    int a[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 2; i < n; i++) {
        if (!(
            (a[i] > a[i - 1] && a[i - 1] < a[i - 2])
            ||
            (a[i] < a[i - 1] && a[i - 1] > a[i - 2])
            )) {
            r = 0;
        }
    }

    if (n == 2 && a[0] == a[1]) {
        r = 0;
    }

    printf("%d\n", r);

    return 0;
}
