#include<stdio.h>
#include<string.h>

void copiarMaior(char t[], int u, int c, char maior[]) {
    int i, j;
    for (i = u - c, j = 0; i < u; i++, j++) {
        maior[j] = t[i];
    }
    maior[j] = '\0';
}

int main() {
    char t[110];
    char maior[110];
    int m = 0;
    while (1) {
        int i, c = 0;
        scanf("%[^\n]%*c", t);
        if (strcmp(t, "0") == 0) {
            printf("\nThe biggest word: %s\n", maior);
            return 0;
        }
        for (i = 0; i < strlen(t); i++) {
            if (t[i] == ' ') {
                printf("%d-", c);
                if (c >= m) {
                    copiarMaior(t, i, c, maior);
                    m = c;
                }
                c = 0;
            } else {
                c++;
            }
        }
        printf("%d\n", c);
        if (c >= m) {
            copiarMaior(t, i, c, maior);
        }
    }
    return 0;
}
