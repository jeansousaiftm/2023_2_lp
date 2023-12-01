#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
    int n;
    scanf("%d%*c", &n);
    while (n--) {
        int i, v[128], maior = 0;
        for (i = 0; i < 128; i++) {
            v[i] = 0;
        }
        char f[250];
        scanf("%[^\n]%*c", f);
        for (i = 0; i < strlen(f); i++) {
            if (isalpha(f[i])) {
                char c = tolower(f[i]);
                v[c]++;
                if (v[c] > maior) {
                    maior = v[c];
                }
            }
        }
        for (i = 0; i < 128; i++) {
            if (v[i] == maior) {
                printf("%c", i);
            }
        }
        printf("\n");
    }
    return 0;
}
