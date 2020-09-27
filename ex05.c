#include <stdio.h>
int main (void)
{
    int npa = 0 , razao = 0 , contador = 0, pa = 0;
    printf("Digite a Quantidade de Elementos da PA :\n");
    scanf("%d" , &npa );
    printf("Digite a Razao da sua PA :\n");
    scanf("%d" , &razao );


    if(npa >=0 && razao >0){

        do{
            printf("%d ... " , pa );
            pa =  pa + razao;
            ++contador;
        }while(contador !=npa);
    }
    else if (npa < 0 || razao <=0){
        printf("Pa Invalida");
    }



    return 0 ;
}
