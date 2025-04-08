//3) Leia um valor inteiro. A seguir, calcule o menor número de notas possíveis (cédulas) no qual o valor pode ser decomposto.
//As notas consideradas são de 100, 50, 20, 10, 5, 2 e 1. A seguir mostre o valor lido e a relação de notas necessárias. Se a entrada for 576, a saída deve ser:
//5 nota(s) de R$ 100,00
//1 nota(s) de R$ 50,00
//1 nota(s) de R$ 20,00
//0 nota(s) de R$ 10,00
//1 nota(s) de R$ 5,00
//0 nota(s) de R$ 2,00
//1 nota(s) de R$ 1,00
#include <stdio.h>

int main() {
    int valor, nota100, nota50, nota20, nota10, nota5, nota2, nota1;

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    nota100 = valor / 100;
    valor = valor % 100;

    nota50 = valor / 50;
    valor = valor % 50;

    nota20 = valor / 20;
    valor = valor % 20;

    nota10 = valor / 10;
    valor = valor % 10;

    nota5 = valor / 5;
    valor = valor % 5;

    nota2 = valor / 2;
    valor = valor % 2;

    nota1 = valor;

    printf("%d nota(s) de R$ 100,00\n", nota100);
    printf("%d nota(s) de R$ 50,00\n", nota50);
    printf("%d nota(s) de R$ 20,00\n", nota20);
    printf("%d nota(s) de R$ 10,00\n", nota10);
    printf("%d nota(s) de R$ 5,00\n", nota5);
    printf("%d nota(s) de R$ 2,00\n", nota2);
    printf("%d nota(s) de R$ 1,00\n", nota1);

    return 0;
}

