#include<stdio.h>
#include<math.h>

double potencia(double base, double expoente) {
    double r = 1;
    for (int i = 0; i < expoente; i++) {
        r *= base;
    }
    return r;
}

double funcao1(double a, double b, double c) {
    double delta = potencia(b, 2) - 4 * a * c;
    return delta;
}

int funcao2(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
    //return (a > b) ? a : b;
}

void funcao3(int n) {
    int i;
    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

int funcao4(int a, int b, int c) {
    int q = 0;
    if (a % 2 == 0) {
        q++;
    }
    if (b % 2 == 0) {
        q++;
    }
    if (c % 2 == 0) {
        q++;
    }
    //q += (a % 2 == 0);
    //q += (b % 2 == 0);
    //q += (c % 2 == 0);
    return q;
}

double funcao5(double a1, double an, double n) {
    return (n * (a1 + an)) / 2;
}

int funcao6(double b, double h) {
    return (b == h);
}

int funcao7(int a, int b, int c) {
    int maior = a;
    if (b > maior) {
        maior = b;
    }
    if (c > maior) {
        maior = c;
    }
    int menor = a;
    if (b < menor) {
        menor = b;
    }
    if (c < menor) {
        menor = c;
    }
    return maior + menor;
}

double funcao8(double c, double m, double t) {
    return c * m * (t / 100);
}

void funcao9(double a, double b, double c) {
    double delta = funcao1(a, b, c);
    if (a == 0) {
        double x = (-c) / b;
        printf("1 Raiz, x = %lf\n", x);
    } else if (delta > 0) {
        double x1 = ((-b) + sqrt(delta)) / (2 * a);
        double x2 = ((-b) - sqrt(delta)) / (2 * a);
        printf("2 Raizes, x1 = %lf, x2 = %lf\n", x1, x2);
    } else if (delta == 0) {
        double x = (-b) / (2 * a);
        printf("1 Raiz, x = %lf\n", x);
    } else {
        printf("0 Raizes\n");
    }
}

int funcao10(int a, int b) {
    int i, s = 0;
    for (i = a; i <= b; i++) {
        if (i % 2 == 0) {
            s += i;
        }
    }
    return s;
}

void funcao11(int n) {
    int i;
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    printf("F1 %lf\n", funcao1(2, 4, 2));
    printf("F2 %d\n", funcao2(4, 5));
    funcao3(10);
    printf("F4 %d\n", funcao4(2, 3, 4));
    printf("F5 %lf\n", funcao5(1, 4, 4));
    printf("F6 %d\n", funcao6(3, 2));
    printf("F7 %d\n", funcao7(10, 9, 15));
    printf("F8 %lf\n", funcao8(1000, 10, 1));
    funcao9(0, 1, 2);
    funcao9(1, 5, 0);
    funcao9(2, 4, 2);
    funcao9(2, 2, 2);
    /*double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    funcao9(a, b, c);*/
    printf("F10 %d\n", funcao10(5, 10));
    funcao11(66);
    return 0;
}
