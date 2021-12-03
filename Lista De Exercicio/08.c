#include <stdio.h>


int main(int argc, char const *argv[])
{
    
/*
8)Um determinado material radioativo perde metade de sua massa a cada 50
segundos. Leia a massa inicial, em gramas, faça um programa que determine o tempo
necessário para que essa massa se torne menor do que 0,5 grama. Escreva a massa
inicial, massa final e o tempo calculado.
*/

    float massaInicial, massaFinal;
    int tempoTotal = 0;

    printf("Insira a massa :");
    scanf("%f", &massaInicial);

    massaFinal = massaInicial;

    while(massaFinal >= 0.5)
    {
        massaFinal /= 2;
        tempoTotal += 50;
    }

    printf("\n");
    printf("Massa Inicial: %7.0f gramas.\n", massaInicial);
    printf("Massa Final: %9.2f gramas.\n", massaFinal);
    printf("\n");
    printf("Tempo Total: %d segundos.\n", tempoTotal);



    return 0;
}

