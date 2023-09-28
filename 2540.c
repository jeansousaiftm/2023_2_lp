#include<stdio.h>

int main() {

    int n, x;

    while (scanf("%d", &n) != EOF) {

        double vi = (n / 3.0) * 2, v = 0;

        while (n--) {
            scanf("%d", &x);
            v += x;
        }

        if (v >= vi) {
            printf("impeachment\n");
        } else {
            printf("acusacao arquivada\n");
        }

    }

    return 0;
}
