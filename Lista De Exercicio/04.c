#include <stdio.h>

int main(int argc, char const *argv[])
{

/*
4)Faça um algoritmo que informe o mês de acordo com o número digitado pelo
usuário. Exemplo: Entrada = 4. Saída = Abril.
*/

    int numMes;
    printf("****Informe um numero 1 a 12****");
    printf("\nExemplo: Entrada = 4. Saida = Abril");
    printf("\nDigite: ");
    scanf("%d", &numMes);

    switch(numMes){
        case 1:
        printf("janeiro");
            break;
        case 2:
        printf("Fevereiro");
          break;
        case 3:
        printf("Março");
         break;
        case 4:
        printf("Abril");
          break;
        case 5:
        printf("Maio");
         break;
        case 6:
        printf("Junho");
          break;
        case 7:
        printf("Julho");
         break;
        case 8:
        printf("Agosto");
          break;
        case 9:
        printf("Setembro");
         break;
        case 10:
        printf("Outubro");
          break;
        case 11:
        printf("Novembro");
          break;
        case 12:
        printf("Dezembro");
         break;
        default:
        printf("Erro, Apenas numero de 1 a 12");
         break;
    }
    return 0;
}
