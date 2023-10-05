#include<stdio.h>

int main() {

    int n, x;

    scanf("%d", &n);

    while (n--) {
        scanf("%d", &x);
        if (x < 0) {
            printf("42\n");
        } else {
            printf("%d\n", x);
        }
    }

    return 0;
}
