#include<stdio.h>

int main() {
    int n, s = 0, q = 0;
    while (scanf("%d", &n) == 1 && n >= 0) {
        s += n;
        q++;
    }
    double media = ((double) s) / q;
    printf("%.2lf\n", media);
    return 0;
}
