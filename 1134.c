#include<stdio.h>

int main() {

    int n, a = 0, g = 0, d = 0;

    while (scanf("%d", &n) == 1 && n != 4) {
        switch (n) {
            case 1:
                a++;
                break;
            case 2:
                g++;
                break;
            case 3:
                d++;
                break;
        }
    }

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", a);
    printf("Gasolina: %d\n", g);
    printf("Diesel: %d\n", d);

    return 0;
}
