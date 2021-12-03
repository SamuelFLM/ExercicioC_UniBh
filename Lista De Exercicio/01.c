#include <stdio.h>



int main(int argc, char const *argv[])
{
    
    //01- Perimetro de um retangulo
/*
(1)Crie um programa para calcular a área e o perímetro de um retângulo, com base nas
medidas de sua base e de sua altura
*/

    int lad1,lad2,base,alt;
    float area = 0, peri = 0;

    printf("Informe o primeiro lado:");
    scanf("%d", &lad1);

    printf("Informe o segundo lado: ");
    scanf("%d", &lad2);

    printf("Insira o valor da base: ");
    scanf("%d", &base);

    printf("Informe a altura do triangulo: ");
    scanf("%d", &alt);

    area = (base * alt) /2;
    printf("A area do triangulo: %2.f",area);

    peri = lad1 + lad2 + base;
    printf("\nO perimetro do triangulo: %2.f",peri);








    return 0;
}
