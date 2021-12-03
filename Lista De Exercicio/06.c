#include <stdio.h>

int main(int argc, char const *argv[])
{
    
/*
6)Escreva um programa que seja capaz de ler do teclado 31 valores reais
correspondentes ao índice pluviométrico diário de um mês. O programa deve
determinar o índice pluviométrico médio, o índice pluviométrico máximo e o dia de
ocorrência.
*/

    int dia = 0;
    double media = 0, maior = 0;
    double indices[31];

    for(int i = 0; i < 31;i++)
    {
        printf("Digite o indice pluviometrico do dia %d: ",i + 1);
        scanf("%f", &indices[i]);

        media += indices[i];

        if(indices[i] > maior || i==0)
        {
            dia = i + 1;
            maior = indices[i];
        }
    }

    
    media /= (int) sizeof(indices);

            printf("\nO indice pluviometrico medio foi de %d mm",media);
            printf("\nO indice pluviometrico maximo foi de %2.f mm e ocorreu no %d ",maior,dia);



    return 0;
}
