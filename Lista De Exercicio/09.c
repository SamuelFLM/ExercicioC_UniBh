#include <stdio.h>

int main(int argc, char const *argv[])
{
    
/*
9)Faça um programa que apresente o menu de opções a seguir, que permita ao
usuário escolher a opção desejada, receba os dados necessários para executar a
operação e mostre o resultado.
Menu de opções:
Novo salário
Férias
Décimo terceiro 5) Sair
Na opção 1: receber o salário de um funcionário, calcular e mostrar o novo salário
usando as regras a seguir:
Salários Percentagem de aumento
Até R$999,99 15%
De R$1000,00 a R$2000,00 (inclusive) 10%
Acima de R$2000,00 5%
Na opção 2: receber o salário de um funcionário, calcular e mostrar o valor de suas
férias. Sabe-se que as férias equivalem a seu salário acrescido de um terço do
salário.
Na opção 3: receber o salário de um funcionário e o número de meses de trabalho na
empresa, no máximo doze, calcular e mostrar o valor do décimo terceiro. Sabe-se que
o décimo terceiro equivale a seu salário multiplicado pelo número de meses de
trabalho dividido por 12. Na opção 4: sair do programa
Obs: caso seja informada uma opção ou um salário inválido deve-se apresentar uma
mensagem de erro e solicitar um novo valor.
*/

    int opcao;
do{

    printf("\n*******OPCAO******** ");
    printf("\nMenu de opcoes:");
    printf("\n[1] - Novo Salario ");
    printf("\n[2] - Ferias ");
    printf("\n[3] - Decimo Terceiro ");
    printf("\n[4] - Sair ");
    printf("\nDigite: ");
    scanf("%d", &opcao);

    float salario,novoSalario;
    int mesTrab;

    switch (opcao)
    {
    case 1:
        printf("\nDigite seu salario: ");
        scanf("%f", &salario );

        if(salario >= 1 && salario <= 999.99)
        {
            novoSalario = salario + (salario * 15/100);
            printf("\nSeu novo salario R$: %2.f ", novoSalario);
        }
        else if(salario >= 1000 && salario <= 2000)
        {
            novoSalario = salario +( salario * 10/100);
            printf("\nSeu novo salario R$: %2.f ", novoSalario);
        }
        else{
            novoSalario = salario + ( salario * 5/100);
            printf("\nSeu novo salario R$: %2.f ", novoSalario);
        }
        break;
    case 2:
            printf("\nDigite seu salario: ");
            scanf("%f", &salario );

            novoSalario = salario + (salario /3);
            printf("\nSeu novo salario R$: %2.f ", novoSalario);
        break;    
    case 3:
            printf("\nDigite seu salario: ");
            scanf("%f", &salario );

            printf("\nDigite quantos meses trabalhou:");
            scanf("%d", &mesTrab);

            novoSalario = (salario * mesTrab) / 12;
            printf("\nSeu novo salario R$: %2.f ", novoSalario);
        break;
    case 4:
        break;
    default:
        printf("\nErro, insira uma opcao de 1 a 4");
        break;
    }

}while(opcao !=4);

    printf("\nFinalizando  . . . ");


    return 0;
}
