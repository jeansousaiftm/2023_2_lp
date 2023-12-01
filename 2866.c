#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
    int n;
    scanf("%d", &n);
    while (n--) {
        int i;
        char t[110];
        scanf("%s", t);
        for (i = strlen(t) - 1; i >= 0; i--) {
            if (islower(t[i])) {
                printf("%c", t[i]);
            }
        }
        printf("\n");
    }
}

