#include <stdio.h>
 int main (void)
{
    int ano = 0 ;
    printf("Digite um Ano :\n");
    scanf("%d" , &ano);

    if(ano % 4 == 0){
        printf("O ano de %d e bissexto!!\n" , ano);
    }
    else
        printf("O ano de %d nao e bissexto!!\n" , ano);

    return 0 ;

}
