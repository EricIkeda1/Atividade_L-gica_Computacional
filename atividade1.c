//1) Em épocas de crises financeiras, os comerciantes estão procurando aumentar suas vendas oferecendo desconto.
//Faça um algoritmo que possa entrar com o valor do produto (V) e o percentual do desconto (P) e mostre como saída o novo valor do produto.
#include<stdio.h>

int main() {
    char nome[50];
    float valor, novo_valor;

    printf("Nome do produto: ");
    scanf("%s", nome);

    printf("Valor do produto: ");
    scanf("%f", &valor);

    novo_valor = valor - (valor * 0.09);

    printf("Produto: %s\n", nome);
    printf("Novo valor: %f\n", novo_valor);

    return 0;
}
