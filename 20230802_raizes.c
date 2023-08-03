/*
Ler 3 numeros que indicam a, b e c de uma
equa��o do segundo grau. Calcular o delta e
imprimir se esse problema possui ou n�o ra�zes
exatas.
Delta < 0 n�o possui
delta = 0 apenas uma raiz
delta > 0 duas ra�zes
*/

#include<stdio.h>
#include<math.h>

int main() {

    double a, b, c, delta;

    scanf("%lf %lf %lf", &a, &b, &c);

    // delta = (b * b) - (4 * a * c);
    delta = pow(b, 2) - (4 * a * c);

    if (delta < 0) {
        printf("Nao possui raizes\n");
    } else if (delta == 0 || a == 0) {
        printf("Possui apenas uma raiz\n");
    } else {
        printf("Possui duas raizes\n");
    }

    return 0;
}
