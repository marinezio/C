#include <stdio.h>
int main (void)
{
    int  numero = 0  , fatorial = 1  , expressao;
    printf("Digite um numero para Receber seu Fatorial :\n");
    scanf("%d" , &numero);
    expressao = numero ;
    do {
            fatorial = numero * fatorial ;
            --numero ;
    }while(numero>0 );
    printf(" O fatorial de %d e : %d\n" , expressao , fatorial);


    return 0 ;
}
