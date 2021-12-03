#include <stdio.h>


int main(int argc, char const *argv[])
{
/*
(2)Faça um algoritmo que calcule o que deve ser pago por um produto, considerando
o preço normal de etiqueta e a escolha da condição de pagamento. Utilize os códigos
da tabela a seguir para ler qual a condição de pagamento escolhida e efetuar o
cálculo adequado.
Código Condição de pagamento
● 1 À vista em dinheiro, recebe 10% de desconto.
● 2 À vista no cartão de crédito, recebe 5% de desconto.
● 3 Em 2 vezes, preço normal de etiqueta sem juros.
● 4 Em 3 vezes, preço normal de etiqueta mais 10% de juros.
*/

    int valorCompra,opcao;
    printf("Qual o valor da compra: ");
    scanf("%d", &valorCompra);

    printf("\n***Selecione Metodos Para Pagamento***\n");
    printf("[1] - A vista em dinheiro, recebe 10%% de desconto.");
    printf("\n[2] - A vista no cartao de credito, recebe 5%% de desconto.");
    printf("\n[3] - Em 2 vezes, preco normal de etiqueta sem juros.");
    printf("\n[4] - Em 3 vezes, preco normal de etiqueta mais 10%% de juros.");
    printf("\nDigite: ");
    scanf("%d", &opcao);

    float cod1,cod2,cod3,cod4;

    switch (opcao)
    {
    case 1:
         cod1 = valorCompra - (valorCompra * 10/100);
        printf("O valor a pagar com 10%% de desconto : %2.f",cod1);
        break;
    case 2:
         cod2 = valorCompra - (valorCompra * 5/100);
        printf("O valor a pagar com 10%% de desconto : %2.f",cod2);
    break;

    case 3:
         cod3 = valorCompra/2;
        printf("O valor a pagar com 10%% de desconto : %2.f",cod3);
    break;

    case 4:
         cod4 = valorCompra + (valorCompra * 10/100);
        printf("O valor a pagar com 10%% de desconto : %2.f",cod4);
    break;

    default:
        printf("Erro, Selecione de 1 a 4");
        break;
    }
     









    return 0;
}
