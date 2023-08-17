#include<stdio.h>

int main() {

    int totalDias, dias, meses, anos;

    scanf("%d", &totalDias);

    anos = totalDias / 365;
    totalDias = totalDias % 365;
    meses = totalDias / 30;
    dias = totalDias % 30;

    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);

    return 0;
}
