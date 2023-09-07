#include<stdio.h>

int main() {

    int n;

    while (scanf("%d", &n) == 1 && n > 0) {

        int j1 = 0, j2 = 0, a, b;

        while (n--) {
            scanf("%d %d", &a, &b);
            if (a > b) {
                j1++;
            } else if (b > a) {
                j2++;
            }
        }

        printf("%d %d\n", j1, j2);

    }

    return 0;
}
