#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    
/*
5)Faça um programa que receba dois números e execute as operações listadas a
seguir, de acordo com a escolha do usuário.
Escolha do usuário Operação
1 Média entre os números digitados
2 Diferença do maior pelo menor
3 Produto entre os números digitados
4 Divisão do primeiro pelo segundo
Se a opção digitada for inválida, mostre uma mensagem de erro. Lembre-se de que, na opção 4, o segundo número deve ser diferente de zero
*/

    int op;
    int dif,dif1;
    int  num1,num2,media;
    float div;
    int prod;
do
{

    printf("\nInforme o primeiro numero: ");
    scanf("%d", &num1);

    printf("\nInforme o segundo numero: ");
    scanf("%d", &num2);
    
    printf("\nEscolha uma opcao");
    printf("\n[1] -Media entre os numeros digitador");
    printf("\n[2] -Diferenca do maior pelo menor");
    printf("\n[3] -Produto entre os numeros");
    printf("\n[4] -Divisao do primeiro pelo segundo");
    printf("\n[5] -Finalizar ");
    printf("\nDigite: ");
    scanf("%d", &op);

        switch (op)
        {
            case 1:
                media = (num1 + num2)/2;
                printf("\nMedia: %d", media);
                break;
            case 2:
                
                if(num1 > num2)
                {
                    dif = num1 - num2;
                    printf("\nDiferenca Maior: %d",dif);
                }else{
                dif1 = num2 - num1; 
                printf("\nDiferenca Menor: %d", dif1);
                }
                break;
            case 3:
                prod = num1 * num2;
                printf("\nProduto: %d",prod);
                break;
            case 4:
                if(num1 > 0 && num2 != 0)
                {
                    div = num1 / num2;
                    printf("\nDivisao: %2.f",div);
                }else{
                    printf("\nPor favor, insira um segundo numero diferente de zero");
                    break;
                }
            
            default:
                printf("\nErro, informe um numero de 1 a 5");
                break;
        }
} while (op != 5);

    return 0;
}
