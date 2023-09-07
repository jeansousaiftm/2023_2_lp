#include<stdio.h>

int main() {
    int e, d;
    while (scanf("%d %d", &e, &d) == 2 && e + d > 0) {
        printf("%d\n", e + d);
    }
    return 0;
}
