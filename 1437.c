#include<stdio.h>

int main() {

    int n;

    while (scanf("%d%*c", &n) == 1 && n > 0) {

        int o = 0;

        char c;
        while (n--) {
            scanf("%c", &c);

            if (c == 'D') {
                o++;
            } else if (c == 'E') {
                o--;
            }

            if (o > 3) {
                o = 0;
            }
            if (o < 0) {
                o = 3;
            }
        }

        switch(o) {
            case 0:
                printf("N\n");
                break;
            case 1:
                printf("L\n");
                break;
            case 2:
                printf("S\n");
                break;
            case 3:
                printf("O\n");
                break;
        }

    }


    return 0;
}
