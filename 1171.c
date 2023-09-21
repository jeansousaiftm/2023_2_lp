#include<stdio.h>
#define MAX 2001
int main() {

    int n, i, x;

    scanf("%d", &n);

    int a[MAX];

    for (i = 0; i < MAX; i++) {
        a[i] = 0;
    }

    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        a[x]++;
    }

    for (i = 0; i < MAX; i++) {
        if (a[i] > 0) {
            printf("%d aparece %d vez(es)\n", i, a[i]);
        }
    }

    return 0;
}
