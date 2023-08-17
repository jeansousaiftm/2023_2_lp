#include<stdio.h>
#define TAM 10

int main() {

    int x, i, pares = 0, impares = 0;

    for (i = 0; i < TAM; i++) {
        scanf("%d", &x);
        if (x % 2 == 0) {
            pares++;
        }
    }

    impares = TAM - pares;

    printf("%d %d\n", pares, impares);

    return 0;
}
