#include<stdio.h>

int main() {

    int c, p, f;

    scanf("%d %d %d", &c, &p, &f);

    if (c * f <= p) {
        printf("S\n");
    } else {
        printf("N\n");
    }

    return 0;
}
