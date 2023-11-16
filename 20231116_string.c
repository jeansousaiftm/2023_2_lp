#include<stdio.h>
#include<string.h>
#include<ctype.h>
//https://cplusplus.com/reference/cctype/
//https://cplusplus.com/reference/cstring/
//https://cplusplus.com/reference/cstdio/scanf/

int main() {

    char nome1[100], nome2[100];

    //scanf("%[A-Z|a-z]s", nome);
    scanf("%[^\n]%*c", nome1);
    scanf("%[^\n]%*c", nome2);

    printf("%s\n%s\n", nome1, nome2);

    //nome2 = nome1;
    //strcpy(nome2, "Teste");

    //scanf("%[^\n]%*c", nome2);
    //printf("%s %d\n", nome, strlen(nome));

    //int i;
    /*for (i = 0; i < strlen(nome); i++) {
        printf("%c\n", tolower(nome[i]));
        // toupper

        //isupper, islower, isalpha
    }*/
    /*for (i = 0; i < strlen(nome); i++) {
        if (isalpha(nome[i])) {
            printf("%c\n", nome[i]);
        }
    }*/

    //printf("%d\n", strcmp(nome1, nome2));

    return 0;
}
