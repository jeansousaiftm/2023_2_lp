#include<stdio.h>

int main() {

    int n, t = 0, x;

    scanf("%d", &n);

    while (n--) {
        scanf("%d", &x);

        t += (x - 1);
    }

    printf("%d\n", t);

    return 0;
}
