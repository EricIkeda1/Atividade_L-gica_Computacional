//2) Ler dois valores para as variaveis A e B, efetuar a troca dos valores de forma que
//a variavel A passe a ter o valor da variavel B e que a variavel B passe a ter o valor da variavel A. Apresentar os valores trocados.
#include <stdio.h>

int main() {
    int A, B, temp;

    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    temp = A;
    A = B;
    B = temp;

    printf("Valores trocados:\n");
    printf("A = %d\n", A);
    printf("B = %d\n", B);

    return 0;
}
