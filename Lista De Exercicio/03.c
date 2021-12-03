#include <stdio.h>


int main(int argc, char const *argv[])
{
    
/*
3)O IMC - Índice de Massa Corporal é um critério da Organização Mundial de Saúde
para dar uma indicação de peso de uma pessoa adulta. A fórmula é IMC =
peso/(altura)2. Elabore um algoritmo que leia o peso e a altura de um adulto e mostre
sua condição.
● IMC em adultos Condição
● abaixo de 18,5 abaixo do peso
● entre 18,5 e 25 peso normal
● entre 25 e 30 acima do peso
● acima de 30 obeso
*/

    int peso;
    float imc,altura;

    printf("Informe seu peso: ");
    scanf("%d", &peso);

    printf("Informe sua altura: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    if(imc < 18.5)
    {
        printf("Abaixo do peso");
    }
    else if(imc >= 18.5 && imc <= 25)
    {
        printf("Peso Normal");
    }
    else if(imc >= 25 && imc <= 30)
    {
        printf("Acima do peso");
    }
    else
    {
        printf("Obeso");
    }


    return 0;
}
