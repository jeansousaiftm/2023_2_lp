#include<stdio.h>

int main() {

    int n, i, x, maior = -999999;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        if (x > maior) {
            maior = x;
        }
    }

    printf("%d\n", maior);

    return 0;
}
