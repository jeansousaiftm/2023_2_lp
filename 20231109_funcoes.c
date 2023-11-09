#include<stdio.h>

int somaVetor(int v[], int n) {
    int soma = 0, i;
    for (i = 0; i < n; i++) {
        soma += v[i];
    }
    return soma;
}

void imprimirVetor(int v[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        if (i != 0) printf(" + ");
        printf("%d", v[i]);
    }
    printf(" = %d\n", somaVetor(v, n));
}

int main() {
    int n, i;
    scanf("%d", &n);
    int v[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    imprimirVetor(v, n);

    for (i = 0; i < n; i++) {
        if (v[i] < 0) {
            v[i] = 0;
        }
    }

    imprimirVetor(v, n);

    return 0;
}
