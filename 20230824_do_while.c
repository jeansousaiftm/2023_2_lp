#include<stdio.h>

int main() {


    int opcao;

    do {

        printf("1. Soma\n2. Subtracao\n");
        scanf("%d", &opcao);

        int a, b;

        switch(opcao) {
            case 1:
                scanf("%d %d", &a, &b);
                printf("%d\n", a + b);
                break;
            case 2:
                scanf("%d %d", &a, &b);
                printf("%d\n", a - b);
                break;
        }


    } while (opcao == 1 || opcao == 2);


    return 0;
}

