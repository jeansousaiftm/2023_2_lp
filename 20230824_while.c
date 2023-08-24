#include<stdio.h>

int main() {

    int n, q = 0;

    scanf("%d", &n);

    while (n % 2 == 0) {
        q++;
        scanf("%d", &n);
    }

    printf("%d\n", q);

    return 0;
}
