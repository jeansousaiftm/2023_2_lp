#include<stdio.h>

int main() {

    int n, i;
    long long f[40];

    scanf("%d", &n);

    f[0] = 1;
    f[1] = 1;

    for (i = 2; i < n; i++) {
        f[i] = f[i - 1] + f[i - 2];
    }

    for (i = n - 1; i >= 0; i--) {
        printf("%lld", f[i]);
        if (i > 0) printf(" ");
    }

    printf("\n");

    return 0;
}
