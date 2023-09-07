#include<stdio.h>

int main() {
    int i, f;
    scanf("%d %d", &i, &f);
    if (f <= 2) {
        printf("nova\n");
    } else if (f >= 97) {
        printf("cheia\n");
    } else if (i < f) {
        printf("crescente\n");
    } else {
        printf("minguante\n");
    }
    return 0;
}
