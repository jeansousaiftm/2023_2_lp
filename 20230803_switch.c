#include<stdio.h>

int main() {
    double a, b, resultado;
    char operacao;
    scanf("%lf %c %lf", &a, &operacao, &b);
    switch (operacao) {
        case '+':
            resultado = a + b;
            break;
        case '-':
            resultado = a - b;
            break;
        case '*':
            resultado = a * b;
            break;
        case '/':
            resultado = a / b;
            break;
        default:
            printf("Operacao nao suportada.");
            return 0;
    }
    printf("%lf %c %lf = %lf\n",
           a, operacao, b, resultado);
    return 0;
}
