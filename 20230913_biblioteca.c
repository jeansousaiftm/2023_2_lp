/*
Ler um n�mero n que indica o n�mero de
livros de uma biblioteca. Ler o numero
de paginas de cada um desses livros.
No final, voc� deve imprimir qual a posi��o
do livro que tem o maior n�mero de paginas
e a posi��o do livro que tem o menor n�mero
de p�ginas
*/

#include<stdio.h>
int main() {
    int n, i;
    scanf("%d", &n);
    int p[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &p[i]);
    }
    int maior = p[0], posicaoMaior = 0;
    for (i = 1; i < n; i++) {
        if (p[i] > maior) {
            maior = p[i];
            posicaoMaior = i;
        }
    }
    printf("%d\n", posicaoMaior);
    int menor = p[0], posicaoMenor = 0;
    for (i = 1; i < n; i++) {
        if (p[i] < menor) {
            menor = p[i];
            posicaoMenor = i;
        }
    }
    printf("%d\n", posicaoMenor);
    return 0;
}
