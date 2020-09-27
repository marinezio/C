#include <stdio.h>
int main (void)
{
    int  NPG  = 0 ,  Razao = 0  ,  PG = 1 , Contador =  0;
    printf("Digite a Quantidade de Elementos da PG\n");
    scanf("%d",&NPG);

    printf("Digite a Razao da sua PG\n");
    scanf("%d",&Razao);

    for(; Contador != NPG ; ++Contador){

        printf("%d..." , PG);

        PG *= Razao ;

    }
    return 0 ;
}

