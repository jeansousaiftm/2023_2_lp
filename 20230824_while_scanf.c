#include<stdio.h>

int main() {

    int a, b;

    // while (scanf() != EOF)

    while (scanf("%d %d", &a, &b) == 2 &&
           !(a == 0 && b == 0)) {

        if (a > b) {
            printf("O primeiro e maior\n");
        } else if (b > a) {
            printf("O segundo e maior\n");
        } else {
            printf("Os dois sao iguais\n");
        }

    }

    return 0;
}
