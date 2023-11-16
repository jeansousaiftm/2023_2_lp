#include<stdio.h>
#include<string.h>

int main() {

    char tipo[100], alimento[100];
    int n, i;

    scanf("%s %d", tipo, &n);

    for (i = 0; i < n; i++) {
        scanf("%s", alimento);
        if (strcmp(alimento, "alface") == 0) {
            strcpy(tipo, "pranta"); // tipo = "pranta"
        }
        if (strcmp(alimento, "burrito") == 0) {
            strcpy(tipo, "foguento");
        }
        if (strcmp(alimento, "cerveja") == 0) {
            strcpy(tipo, "aguado");
        }
        //printf("%s\n", tipo);
    }

    printf("%s\n", tipo);

    return 0;
}
