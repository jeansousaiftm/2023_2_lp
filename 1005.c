#include<stdio.h>
#define PESO_A 3.5
#define PESO_B 7.5

int main() {
    double a, b, media;
    scanf("%lf %lf", &a, &b);

    media = ((a * PESO_A) + (b * PESO_B)) / (PESO_A + PESO_B);

    printf("MEDIA = %.5lf\n", media);

    return 0;
}
