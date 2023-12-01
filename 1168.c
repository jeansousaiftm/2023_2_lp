#include<stdio.h>
#include<string.h>

int main() {
    int n;
    scanf("%d", &n);
    while (n--) {
        int l = 0, i;
        char v[200];
        scanf("%s", v);
        for (i = 0; i < strlen(v); i++) {
            switch(v[i]) {
                case '1':
                    l += 2;
                    break;
                case '2':
                case '3':
                case '5':
                    l += 5;
                    break;
                case '4':
                    l += 4;
                    break;
                case '6':
                case '9':
                case '0':
                    l += 6;
                    break;
                case '7':
                    l += 3;
                    break;
                case '8':
                    l += 7;
                    break;
            }

        }
        printf("%d leds\n", l);
    }
    return 0;
}
