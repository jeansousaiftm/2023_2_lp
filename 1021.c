#include<stdio.h>

int main() {

    int reais, centavos;

    scanf("%d.%d", &reais, &centavos);

    int n100 = reais / 100;
    reais = reais % 100;
    int n50 = reais / 50;
    reais = reais % 50;
    int n20 = reais / 20;
    reais = reais % 20;
    int n10 = reais / 10;
    reais = reais % 10;
    int n5 = reais / 5;
    reais = reais % 5;
    int n2 = reais / 2;
    int n1 = reais % 2;

    int m50 = centavos / 50;
    centavos = centavos % 50;
    int m25 = centavos / 25;
    centavos = centavos % 25;
    int m10 = centavos / 10;
    centavos = centavos % 10;
    int m5 = centavos / 5;
    int m1 = centavos % 5;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", n100);
    printf("%d nota(s) de R$ 50.00\n", n50);
    printf("%d nota(s) de R$ 20.00\n", n20);
    printf("%d nota(s) de R$ 10.00\n", n10);
    printf("%d nota(s) de R$ 5.00\n", n5);
    printf("%d nota(s) de R$ 2.00\n", n2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", n1);
    printf("%d moeda(s) de R$ 0.50\n", m50);
    printf("%d moeda(s) de R$ 0.25\n", m25);
    printf("%d moeda(s) de R$ 0.10\n", m10);
    printf("%d moeda(s) de R$ 0.05\n", m5);
    printf("%d moeda(s) de R$ 0.01\n", m1);

    return 0;
}
