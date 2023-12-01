#include<stdio.h>
#include<string.h>

int main() {
    int n;
    scanf("%d", &n);
    while (n--) {
        int aux = 0;
        int i = 0, a1 = 0, a2 = 0;
        char s[250];
        scanf("%s", s);
        for (i = 1; i < strlen(s); i++) {
            if (s[i] == 'a') {
                if (aux == 0) {
                    a1++;
                } else {
                    a2++;
                }
            } else {
                aux = 1;
            }
        }
        printf("k");
        for (i = 0; i < a1 * a2; i++) {
            printf("a");
        }
        printf("\n");
    }
}
