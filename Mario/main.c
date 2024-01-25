#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tam, i, j;
    int alt;

    while(1)
    {
        printf("Tamanho: ");
        scanf("%d", &tam);

        if(tam>0 && tam<=8)
        {
            break;
        }

    }
/*
    for(i=1;i<=tam;i++)
    {
        for(j=0;j<tam-i;j++)
        {
            printf(" ");
        }
        for(j=0; j<i; j++)
        {
            printf("#");
        }
        printf("\n");
    }


    for(i=0; i<tam; i++)
    {
        for(j=0; j<i+1; j++)
        {
            printf("#");

        }
        printf("\n");
    }
*/
    for(i=1;i<=tam;i++)
    {
        for(j=0;j<tam-i;j++)
        {
            printf(" ");
        }
        for(j=0; j<i; j++)
        {
            printf("#");
        }

        printf("  ");

        for(j=0; j<i; j++)
        {
            printf("#");
        }

        printf("\n");
    }


    return 0;
}
