#include <stdio.h>
int main (void)
{
    int numero = 1 ;
    while (numero!=0)
    {
        printf("Digite um Numero!!\nPara sair, Digite 0.!!\n");
        scanf("%d" , &numero);

        if(numero % 2 == 0)
            printf("\nO numero %d e par\n\n" , numero);
        else
            printf("\nO numero %d e impar\n\n" , numero );

    }

    return 0;
}
