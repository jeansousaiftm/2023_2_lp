#include<stdio.h>
#include<string.h>

int main() {
    int n;
    scanf("%d", &n);
    while (n--) {
        char t[10];
        scanf("%s", t);
        if (strlen(t) == 5) {
            printf("3\n");
        } else {
            int i = 0;
            if (t[0] == 'o') {
                i++;
            }
            if (t[1] == 'n') {
                i++;
            }
            if (t[2] == 'e') {
                i++;
            }
            if (i >= 2) {
                printf("1\n");
            } else {
                printf("2\n");
            }
        }
    }

    return 0;
}
