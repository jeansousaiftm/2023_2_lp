#include<stdio.h>

int main() {

    int n, xo, yo, x, y;

    while (scanf("%d", &n) == 1 && n > 0) {

        scanf("%d %d", &xo, &yo);

        while (n--) {

            scanf("%d %d", &x, &y);

            if (x == xo || y == yo) {
                printf("divisa\n");
            } else if (x > xo && y > yo) {
                printf("NE\n");
            } else if (x > xo && y < yo) {
                printf("SE\n");
            } else if (x < xo && y > yo) {
                printf("NO\n");
            } else if (x < xo && y < yo) {
                printf("SO\n");
            }

        }

    }

    return 0;
}
