#include<stdio.h>
#include<string.h>

int main() {
    int n;
    scanf("%d", &n);
    while (n--) {
        char a[100], b[100];
        scanf("%s %s", a, b);
        if (strcmp(a, "tesoura") == 0 && strcmp(b, "papel") == 0) {
            printf("rajesh\n");
        } else if (strcmp(a, "papel") == 0 && strcmp(b, "pedra") == 0) {
            printf("rajesh\n");
        } else if (strcmp(a, "pedra") == 0 && strcmp(b, "lagarto") == 0) {
            printf("rajesh\n");
        } else if (strcmp(a, "lagarto") == 0 && strcmp(b, "spock") == 0) {
            printf("rajesh\n");
        } else if (strcmp(a, "spock") == 0 && strcmp(b, "tesoura") == 0) {
            printf("rajesh\n");
        } else if (strcmp(a, "tesoura") == 0 && strcmp(b, "lagarto") == 0) {
            printf("rajesh\n");
        } else if (strcmp(a, "lagarto") == 0 && strcmp(b, "papel") == 0) {
            printf("rajesh\n");
        } else if (strcmp(a, "papel") == 0 && strcmp(b, "spock") == 0) {
            printf("rajesh\n");
        } else if (strcmp(a, "spock") == 0 && strcmp(b, "pedra") == 0) {
            printf("rajesh\n");
        } else if (strcmp(a, "pedra") == 0 && strcmp(b, "tesoura") == 0) {
            printf("rajesh\n");
        } else if (strcmp(b, "tesoura") == 0 && strcmp(a, "papel") == 0) {
            printf("sheldon\n");
        } else if (strcmp(b, "papel") == 0 && strcmp(a, "pedra") == 0) {
            printf("sheldon\n");
        } else if (strcmp(b, "pedra") == 0 && strcmp(a, "lagarto") == 0) {
            printf("sheldon\n");
        } else if (strcmp(b, "lagarto") == 0 && strcmp(a, "spock") == 0) {
            printf("sheldon\n");
        } else if (strcmp(b, "spock") == 0 && strcmp(a, "tesoura") == 0) {
            printf("sheldon\n");
        } else if (strcmp(b, "tesoura") == 0 && strcmp(a, "lagarto") == 0) {
            printf("sheldon\n");
        } else if (strcmp(b, "lagarto") == 0 && strcmp(a, "papel") == 0) {
            printf("sheldon\n");
        } else if (strcmp(b, "papel") == 0 && strcmp(a, "spock") == 0) {
            printf("sheldon\n");
        } else if (strcmp(b, "spock") == 0 && strcmp(a, "pedra") == 0) {
            printf("sheldon\n");
        } else if (strcmp(b, "pedra") == 0 && strcmp(a, "tesoura") == 0) {
            printf("sheldon\n");
        } else {
            printf("empate\n");
        }
    }
    return 0;
}
