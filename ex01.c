#include <stdio.h>

int main (void)
{
    int menu = 1 ;
    printf("Bem vindo!\n");

    while(menu!=0)
    {
        printf("Escolha um numero de 1 a 9\n");
        scanf("%d" , &menu );
        switch(menu)
        {   case 0:
                printf("\nObrigado!");
                return 0 ;
            case 1 :
                printf("\nVoce selecionou o numero 1\n");
                break ;
            case 2 :
                printf("\nVoce selecionou o numero 2\n");
                break ;
            case 3 :
                printf("\nVoce selecionou o numero 3\n");
                break;
            case 4 :
                printf("\nVoce selecionou o numero 4\n");
                break;
            case 5 :
                printf("\nVoce selecionou o numero 5\n");
                break;
            case 6 :
                printf("\nVoce selecionou o numero 6\n");
                break;
            case 7 :
                printf("\nVoce selecionou o numero 7\n");
                break;
            case 8 :
                printf("\nVoce selecionou o numero 8\n");
                break;
            case 9 :
                printf("\nVoce selecionou o numero 9\n");
                break;
            default :
                printf("\nDigite novamente\n");
                break;
        }

    }

    return 0 ;
}
