#include<stdio.h>

int main() {

    int a, b, soma, sub, mult;
    double divisao;

    scanf("%d %d", &a, &b);

    soma = a + b;
    sub = a - b;
    mult = a * b;
    divisao = (double) a / b;

    printf("%d\n%05d\n%d\n%.2lf\n", soma, sub, mult, divisao);


    return 0;
}
